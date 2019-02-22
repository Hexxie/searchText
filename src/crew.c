#include <sys/types.h>
#include <pthreads>
#include <sys/stat.h>
#include <dirent.h>

#define CREW_SIZE 4

typedef struct work_tag {
	struct work_tag *next; //Next work item
	char *path; //Directory or file
	char *string; //Searched string
} work_t, *work_p;

typedef struct worker_tag {
	int index;
	pthread_t thread;
	struct crew_tag *crew;
} worker, *worker_p;

struct crew_tag {
	int crew_size;
	worker_t crew[CREW_SIZE];
	long work_count;
	work_t *first, *last;
	pthread_mutex_t mutex;
	pthread_cond_t done;
	pthread_cond_t go;
} crew_t, *crew_p;

size_t path_max;
size_t name_max;

void *worker_routine(void *arg) {
	worker_p mine = (worker_t*)arg;
	crew_p crew = mine->crew;
	work_p work, new_work;
	struct stat filestat;
	struct dirent *entry;
	int status;

	entry = (struct dirent*)malloc(sizeof (struct dirent) + name_max);
	if(entry == NULL) {
		printf("Allocating dirent error\n");
		exit(1);
	}

	status = pthread_mutex_lock (&crew->mutex);
	if(status != 0) {
		printf("Lock crew mutex error");
		exit(1);
	}

	//wait till something put on queue
	while(crew->work_count == 0) {
		status = pthread_cond_wait(&crew->go, &crew->mutex);
		if(status != 0) {
			printf("Wait for go");
			exit(1);
		}
	}

	status = pthread_mutex_unlock(&crew->mutex);
	if(status != 0) {
		printf("Unlock crew mutex error");
		exit(1);
	}

	printf("Crew %d starting\n", mine->index);

	while(1) {
		status = pthread_mutex_lock(&crew->mutex);
		if(status != 0) {
			printf("Lock crew mutex error");
			exit(1);
		}

		printf("Crew %d top: first is %#lx, count is %d\n",
			mine->index, crew->first, crew->work_count);

		while(crew->first == NULL) {
			status = pthread_cont_wait(&crew->go, &crew->mutex);
				if(status != 0) {
				printf("Wait for work");
				exit(1);
			}
		}

		printf("Crew %d woke: %#lx, %d\n", mine->index, crew->first, crew->work_count);

		//remove and process a work item
		work = crew->first;
		crew->first = work->next;
		if(crew->first == NULL) {
			crew->last = NULL;
		}

		printf("Crew %d took %#lx, leaves first %#lx, last %#lx\n", mine->index, work, crew->first, crew->last);

	}
}
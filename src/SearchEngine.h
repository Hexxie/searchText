#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

class SearchEngine
{
public:
  SearchEngine();
  ~SearchEngine();

  int startSearch();
  int stopSearch();
  int pauseSearch();
  int resumeSearch();
};

#endif // SEARCHENGINE_H

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hexxie/projects/searchText

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hexxie/projects/searchText/build

# Include any dependencies generated for this target.
include CMakeFiles/search_text_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/search_text_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/search_text_lib.dir/flags.make

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o: CMakeFiles/search_text_lib.dir/flags.make
CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o: ../src/DownloadManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hexxie/projects/searchText/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o -c /home/hexxie/projects/searchText/src/DownloadManager.cpp

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hexxie/projects/searchText/src/DownloadManager.cpp > CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.i

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hexxie/projects/searchText/src/DownloadManager.cpp -o CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.s

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.requires:

.PHONY : CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.requires

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.provides: CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_text_lib.dir/build.make CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.provides.build
.PHONY : CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.provides

CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.provides.build: CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o


CMakeFiles/search_text_lib.dir/src/Link.cpp.o: CMakeFiles/search_text_lib.dir/flags.make
CMakeFiles/search_text_lib.dir/src/Link.cpp.o: ../src/Link.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hexxie/projects/searchText/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/search_text_lib.dir/src/Link.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/search_text_lib.dir/src/Link.cpp.o -c /home/hexxie/projects/searchText/src/Link.cpp

CMakeFiles/search_text_lib.dir/src/Link.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_text_lib.dir/src/Link.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hexxie/projects/searchText/src/Link.cpp > CMakeFiles/search_text_lib.dir/src/Link.cpp.i

CMakeFiles/search_text_lib.dir/src/Link.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_text_lib.dir/src/Link.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hexxie/projects/searchText/src/Link.cpp -o CMakeFiles/search_text_lib.dir/src/Link.cpp.s

CMakeFiles/search_text_lib.dir/src/Link.cpp.o.requires:

.PHONY : CMakeFiles/search_text_lib.dir/src/Link.cpp.o.requires

CMakeFiles/search_text_lib.dir/src/Link.cpp.o.provides: CMakeFiles/search_text_lib.dir/src/Link.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_text_lib.dir/build.make CMakeFiles/search_text_lib.dir/src/Link.cpp.o.provides.build
.PHONY : CMakeFiles/search_text_lib.dir/src/Link.cpp.o.provides

CMakeFiles/search_text_lib.dir/src/Link.cpp.o.provides.build: CMakeFiles/search_text_lib.dir/src/Link.cpp.o


# Object files for target search_text_lib
search_text_lib_OBJECTS = \
"CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o" \
"CMakeFiles/search_text_lib.dir/src/Link.cpp.o"

# External object files for target search_text_lib
search_text_lib_EXTERNAL_OBJECTS =

libsearch_text_lib.a: CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o
libsearch_text_lib.a: CMakeFiles/search_text_lib.dir/src/Link.cpp.o
libsearch_text_lib.a: CMakeFiles/search_text_lib.dir/build.make
libsearch_text_lib.a: CMakeFiles/search_text_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hexxie/projects/searchText/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libsearch_text_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/search_text_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/search_text_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/search_text_lib.dir/build: libsearch_text_lib.a

.PHONY : CMakeFiles/search_text_lib.dir/build

CMakeFiles/search_text_lib.dir/requires: CMakeFiles/search_text_lib.dir/src/DownloadManager.cpp.o.requires
CMakeFiles/search_text_lib.dir/requires: CMakeFiles/search_text_lib.dir/src/Link.cpp.o.requires

.PHONY : CMakeFiles/search_text_lib.dir/requires

CMakeFiles/search_text_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/search_text_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/search_text_lib.dir/clean

CMakeFiles/search_text_lib.dir/depend:
	cd /home/hexxie/projects/searchText/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hexxie/projects/searchText /home/hexxie/projects/searchText /home/hexxie/projects/searchText/build /home/hexxie/projects/searchText/build /home/hexxie/projects/searchText/build/CMakeFiles/search_text_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/search_text_lib.dir/depend

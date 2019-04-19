# CMake generated Testfile for 
# Source directory: /home/hexxie/projects/searchText
# Build directory: /home/hexxie/projects/searchText/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_all "unit_tests")
subdirs("extern/googletest")

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(search_text)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

#############################################
# Find boost
############################################

#set (BOOST_ROOT /home/manjaro/Tools/boost_1_69_0)

#find_package( Boost 1.69 REQUIRED COMPONENTS filesystem system)

# check if boost was found
#if(Boost_FOUND)
#    message ("boost found")
#else()
#    message (FATAL_ERROR "Cannot find Boost")
#endif()

############################################

#############################################
# Create a library
############################################


add_library(searchtext
	src/wrappers/Link.cpp
  src/DownloadManager.cpp    
)

#############################################
# Unit tests
############################################

add_subdirectory(extern/googletest)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests
 test/DownloadManagerTest.cpp
 test/main.cpp)

target_include_directories(unit_tests  
    PRIVATE 
   		  ${PROJECT_SOURCE_DIR}/src/wrappers
        ${PROJECT_SOURCE_DIR}/src        
        ${PROJECT_SOURCE_DIR}/extern/curl/curl)

target_link_libraries(unit_tests
    searchtext
    curl
    GTest::GTest 
    GTest::Main
)

add_test(test_all unit_tests)
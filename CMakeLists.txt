cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(search_text)

set(CMAKE_CXX_STANDARD 11)

#############################################
# Find boost
############################################

set (BOOST_ROOT /home/manjaro/Tools/boost_1_69_0)

find_package( Boost 1.69 REQUIRED COMPONENTS filesystem system)

# check if boost was found
if(Boost_FOUND)
    message ("boost found")
else()
    message (FATAL_ERROR "Cannot find Boost")
endif()

#############################################
# Create a library
############################################

add_library(search_text_lib 
    src/Reverse.cpp
    src/Palindrome.cpp
)

#############################################
# Unit tests
############################################

add_subdirectory(extern/googletest)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests test/unit_tests.cpp)

target_include_directories(unit_tests  
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/src)

target_link_libraries(unit_tests
    search_text_lib
    GTest::GTest 
    GTest::Main
    Boost::filesystem
)

add_test(test_all unit_tests)
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(search_text VERSION 1.0.0 LANGUAGE CXX)

set(CMAKE_CXX_STANDARD 11)

find_package( Boost 1.62 REQUIRED COMPONENTS regex)
include_directories (${Boost_INCLUDE_DIR})

file(GLOB source_files
            "*.h"
            "*.cpp"
            "src/*/*.cpp"
            "src/*/*.h"
            "test/*/*.cpp"
            "test/*/*.h"
    )

add_executable(anyExec ${source_files})

target_link_libraries (anyExec Boost::regex ${GTEST_LIBRARIES} pthread)
#https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html

#############################################
# Unit tests
############################################

#see https://github.com/ttroy50/cmake-examples/blob/master/05-unit-testing/google-test-download/CMakeLists.txt
add_subdirectory(3rd_party/google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests unit_tests.cpp)

target_link_libraries(unit_tests
    example_google_test
    GTest::GTest 
    GTest::Main
)

add_test(test_all unit_tests)
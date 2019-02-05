cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(search_text)

find_package( Boost 1.62 REQUIRED COMPONENTS regex)
include_directories ( ${Boost_INCLUDE_DIR} )

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB source_files
            "*.h"
            "*.cpp"
            "src/*/*.cpp"
            "src/*/*.h"
            "test/*/*.cpp"
            "test/*/*.h"
    )

add_executable( anyExec ${source_files} )

target_link_libraries (anyExec Boost::regex ${GTEST_LIBRARIES} pthread)
#https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html
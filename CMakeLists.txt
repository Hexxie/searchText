cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(search_text)

find_package( Boost 1.62 REQUIRED COMPONENTS regex)
include_directories ( ${Boost_INCLUDE_DIR} )

add_executable( anyExec src/tryboost.cpp )

target_link_libraries (anyExec Boost::regex)
cmake_minimum_required(VERSION 3.16)

project(linking_test
LANGUAGES C CXX
)

add_executable(linking_test_target 
${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/largetranslationunit.cpp


)


cmake_minimum_required(VERSION 3.5.0)
project(29_1_dog_talents VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(29_1_dog_talents main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

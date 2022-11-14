# Cmake file to build the project and test it
cmake_minimum_required(VERSION 3.10)
project(LSDB)
set(TARGET_NAME ${PROJECT_NAME})





add_subdirectory(src)
# we cannot analyse results without gcov
find_program(GCOV_PATH gcov)
if(NOT GCOV_PATH)
  message(FATAL_ERROR "Code coverage analysis requires gcov!")
endif()

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_lib)
target_include_directories(${PROJECT_NAME} PUBLIC src)


# enable_testing()
# add_subdirectory(test)





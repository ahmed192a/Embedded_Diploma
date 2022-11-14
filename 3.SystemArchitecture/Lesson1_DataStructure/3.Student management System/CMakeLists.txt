# Cmake file to build the project and test it
cmake_minimum_required(VERSION 3.10)
project(SDB)
set(TARGET_NAME SDB)





add_subdirectory(src)
# we cannot analyse results without gcov
find_program(GCOV_PATH gcov)
if(NOT GCOV_PATH)
  message(FATAL_ERROR "Code coverage analysis requires gcov!")
endif()

add_executable(SDB main.c)
target_link_libraries(SDB PUBLIC SDB_lib)
target_include_directories(SDB PUBLIC src)


# enable_testing()
# add_subdirectory(test)





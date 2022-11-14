file(GLOB_RECURSE ${PROJECT_NAME}_lib_SOURCES "*.c")
file(GLOB_RECURSE ${PROJECT_NAME}_lib_HEADERS "*.h")

# target_sources( ${PROJECT_NAME}_lib PRIVATE ${${PROJECT_NAME}_lib_SOURCES} PUBLIC ${${PROJECT_NAME}_lib_HEADERS})
add_library( ${PROJECT_NAME}_lib STATIC ${${PROJECT_NAME}_lib_SOURCES} ${${PROJECT_NAME}_lib_HEADERS})
target_include_directories( ${PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_LIST_DIR})


# we use this to get code coverage
# flags are only valid with the GNU compiler and on windows
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME MATCHES Windows)
    target_compile_options( ${PROJECT_NAME}_lib PUBLIC -fprofile-arcs -ftest-coverage)
    target_link_options( ${PROJECT_NAME}_lib PUBLIC -fprofile-arcs -ftest-coverage)
endif()

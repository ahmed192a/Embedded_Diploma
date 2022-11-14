########################################################################
# Dependencies:
# FetchContent added in CMake 3.11, downloads during the configure step
include(FetchContent)
# FetchContent_MakeAvailable was not added until CMake 3.14; use our shim
if(${CMAKE_VERSION} VERSION_LESS 3.14)
  include(cmake/add_FetchContent_MakeAvailable.cmake)
endif()

message(STATUS "Fetching googletest")
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE)
FetchContent_MakeAvailable(googletest)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
########################################################################


file(GLOB_RECURSE ${PROJECT_NAME}_tests "*.cpp")

add_executable(
    ${PROJECT_NAME}_Test
    ${${PROJECT_NAME}_tests}
    )

target_link_libraries( 
    ${PROJECT_NAME}_Test
    PRIVATE
    gtest_main
    ${PROJECT_NAME}_lib
  )

target_include_directories(
    ${PROJECT_NAME}_Test
    PRIVATE
    ../src
    )

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests( 
    ${PROJECT_NAME}_Test
    PROPERTIES
    LABELS "unit"
    DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )
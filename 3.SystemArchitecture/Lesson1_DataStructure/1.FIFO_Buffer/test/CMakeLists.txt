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

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests( 
    ${PROJECT_NAME}_Test
    PROPERTIES
    LABELS "unit"
    DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )
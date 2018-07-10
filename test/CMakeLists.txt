add_executable(
    unit_tests
    example_add.cpp
    factorymethodtest.cpp
        AbstractFactoryTest.cpp)

target_link_libraries(
    unit_tests
    gtest
    gtest_main
    sut
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(ModernCppKatas CXX)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})


add_subdirectory(src)

include(DownloadAtConfig/googletest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/DownloadAtConfig
    ${PROJECT_BINARY_DIR}/googletest
    )

enable_testing()

add_subdirectory(test)
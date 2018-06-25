cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(ModernCppKatas)

add_subdirectory(src)

include(DownloadAtConfig/googletest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/DownloadAtConfig
    ${PROJECT_BINARY_DIR}/googletest
    )

enable_testing()

add_subdirectory(test)
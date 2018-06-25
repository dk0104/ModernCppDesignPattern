add_library(sut "")

target_sources(
    sut
    PRIVATE
        dummy.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/dummy.h
    )

target_include_directories(
    sut
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

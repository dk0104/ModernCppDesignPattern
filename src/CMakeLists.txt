add_library(sut "" )

target_sources(
    sut
    PRIVATE
        dummy.cpp
        FactoryMethod.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/dummy.h
        ${CMAKE_CURRENT_LIST_DIR}/FactoryMethod.h
    )

target_include_directories(
    sut
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

add_library(sut "" Factory/Command.h Factory/ConnectionCommand.cpp Factory/ConnectionCommand.h Factory/TransmissionCommand.cpp Factory/TransmissionCommand.h Factory/CommandFactory.cpp Factory/CommandFactory.h Factory/ConnectionCommandFactory.cpp Factory/ConnectionCommandFactory.h Factory/TransmissionCommandFactory.cpp Factory/TransmissionCommandFactory.h Factory/CommandInitializer.cpp Factory/CommandInitializer.h)

target_sources(
    sut
    PRIVATE
        dummy.cpp
        Factory/FactoryMethod.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/dummy.h
        Factory/FactoryMethod.h
    )

target_include_directories(
    sut
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

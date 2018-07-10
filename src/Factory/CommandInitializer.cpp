//
// Created by toor on 7/10/18.
//

#include "CommandInitializer.h"
using namespace std;

CommandInitializer::CommandInitializer()
{
    commandFactories["Connection"] = make_unique<ConnectionCommandFactory>();
    commandFactories["Transmission"] = make_unique<TransmissionCommandFactory>();
}

unique_ptr<Command> CommandInitializer::CreateCommand(const string& cmdType) {
    {
        auto cmd = commandFactories[cmdType]->CreateCommand();
        return cmd;
    }
}

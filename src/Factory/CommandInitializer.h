//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_COMMANDINITIALIZER_H
#define MODERNCPPDESIGNPATTERN_COMMANDINITIALIZER_H


#include <map>
#include "CommandFactory.h"
#include "ConnectionCommandFactory.h"
#include "TransmissionCommandFactory.h"


class CommandInitializer {
    std::map<std::string,std::unique_ptr<CommandFactory>> commandFactories;
public:
    CommandInitializer();

    std::unique_ptr<Command> CreateCommand(const std::string& cmdType);

};


#endif //MODERNCPPDESIGNPATTERN_COMMANDINITIALIZER_H

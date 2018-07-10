//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_COMMANDFACTORY_H
#define MODERNCPPDESIGNPATTERN_COMMANDFACTORY_H

#include "Command.h"
#include <memory>

class CommandFactory {
public:
    virtual std::unique_ptr<Command> CreateCommand() const = 0;
};


#endif //MODERNCPPDESIGNPATTERN_COMMANDFACTORY_H

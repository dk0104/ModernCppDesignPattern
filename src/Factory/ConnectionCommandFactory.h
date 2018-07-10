//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_CONNECTIONCOMMANDFACTORY_H
#define MODERNCPPDESIGNPATTERN_CONNECTIONCOMMANDFACTORY_H


#include "CommandFactory.h"

class ConnectionCommandFactory : public CommandFactory {
    std::unique_ptr <Command> CreateCommand() const override;

};


#endif //MODERNCPPDESIGNPATTERN_CONNECTIONCOMMANDFACTORY_H

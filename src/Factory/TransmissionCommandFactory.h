//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMANDFACTORY_H
#define MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMANDFACTORY_H


#include "CommandFactory.h"

class TransmissionCommandFactory : public CommandFactory {
    std::unique_ptr <Command> CreateCommand() const override;

};


#endif //MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMANDFACTORY_H

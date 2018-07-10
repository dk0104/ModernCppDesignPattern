//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMAND_H
#define MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMAND_H


#include "Command.h"

class TransmissionCommand : public Command {
public:
    bool ExecuteCmd(std::string &cmd) const override;
};


#endif //MODERNCPPDESIGNPATTERN_TRANSMISSIONCOMMAND_H

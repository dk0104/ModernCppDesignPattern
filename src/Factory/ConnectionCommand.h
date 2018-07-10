//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_CONNECTIONCOMMAND_H
#define MODERNCPPDESIGNPATTERN_CONNECTIONCOMMAND_H


#include "Command.h"

class ConnectionCommand : public  Command{
public:
    bool ExecuteCmd(std::string &cmd) const override;
};


#endif //MODERNCPPDESIGNPATTERN_CONNECTIONCOMMAND_H

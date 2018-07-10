//
// Created by toor on 7/10/18.
//

#ifndef MODERNCPPDESIGNPATTERN_CPMMAND_H
#define MODERNCPPDESIGNPATTERN_CPMMAND_H

#include <string>


class Command {
public:
    virtual ~Command() = default;
    virtual bool ExecuteCmd(std::string& cmd) const = 0;
};


#endif //MODERNCPPDESIGNPATTERN_CPMMAND_H

//
// Created by toor on 7/10/18.
//

#include "ConnectionCommandFactory.h"
#include "ConnectionCommand.h"

using namespace std;

unique_ptr <Command> ConnectionCommandFactory::CreateCommand() const {
    return make_unique<ConnectionCommand>();
}

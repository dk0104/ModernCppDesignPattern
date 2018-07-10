//
// Created by toor on 7/10/18.
//

#include "TransmissionCommandFactory.h"
#include "TransmissionCommand.h"

using namespace std;

unique_ptr <Command> TransmissionCommandFactory::CreateCommand() const {

    return make_unique<TransmissionCommand>();
}

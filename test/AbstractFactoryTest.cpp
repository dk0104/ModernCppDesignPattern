//
// Created by toor on 7/11/18.
//

#include "gtest/gtest.h"
#include "Factory/CommandInitializer.h"
#include <memory>

namespace TestSuit{
using namespace std;

class AbstractFactoryMethodTest : public ::testing::Test{
protected:
    virtual void SetUp(){
        commandInitializer = make_unique<CommandInitializer>();
    };
    virtual void TearDown(){};
    unique_ptr<CommandInitializer> commandInitializer;
};

TEST_F(AbstractFactoryMethodTest,CommandInitializer_Create_TransmissionComand_ValidComandOutput){
    auto cmd = commandInitializer->CreateCommand("Transmission");
    string test{"bla"};
    cmd->ExecuteCmd(test);
}


}
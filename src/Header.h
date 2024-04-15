#pragma once
//#include <stdio.h>
//#include <tgbot/tgbot.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <map>

//std::vector <std::string> bot_commands;

class bot_command {

private:
    std::string name;
    std::string description;
    std::string answer;

public:
    bot_command(std::string *n, std::string *d, std::string *a);
    bot_command();

    std::string GetName() const;
    std::string GetDescription() const;
    std::string GetAnswer() const;

    void SetName(std::string* newname);
    void SetDescription(std::string* newdescription);
    void SetAnswer(std::string* newanswer);

    ~bot_command() {};

};

//#define SQLITECPP_COMPILE_DLL
//#include <SQLiteCpp/SQLiteCpp.h>
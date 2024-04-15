#include "Header.h"

int main() {

    std::map <std::string, int> mapping;
    mapping["ac"] = 1;
    mapping["cht"] = 2;
    mapping["h"] = 3;
    mapping["q"] = -1;

    bot_command command1;

    std::string userstr, tag;
    userstr = "cht";
    while (userstr != "q"){ 
        switch(mapping[userstr]){
            case(1):
                std::cout << "enter name of command\n";
                std::cin >> userstr;
                command1.SetName(&userstr);
                std::cout << "enter description of command " << command1.GetName() << "\n";
                std::cin >> userstr;
                command1.SetDescription(&userstr);
                std::cout << "enter answer for bot on command " << command1.GetName() << "\n";
                std::cin >> userstr;
                command1.SetAnswer(&userstr);
                break;
            case(2):
                std::cout << "enter bot tag\n";
                std::cin >> tag;
                break;
            case(3):
                std::cout << "help\n";
                break;
            default:
                std::cout << "Wrong command. If you need help print 'h'\n";
                break;
        }
        
        std::cin >> userstr;
    }

    std::cout << "Your command:\nname:"<< command1.GetName() << "\n";
    std::cout << "description:"<< command1.GetDescription() << "\n";
    std::cout << "answer:"<< command1.GetAnswer() << "\n";

    mapping.clear();
    std::cout << "end";
    return 0;
}

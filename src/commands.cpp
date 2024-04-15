#include "Header.h"


bot_command::bot_command(std::string *n, std::string *d, std::string *a){
    SetName(n);
    SetDescription(d);
    SetAnswer(a);
}

bot_command::bot_command(){}
    
std::string bot_command::GetName() const {
    return name;
}
std::string bot_command::GetDescription() const{
    return description;
}
std::string bot_command::GetAnswer() const{
    return answer;
}

void bot_command::SetName(std::string *newname){
    name = *newname;
}
void bot_command::SetDescription(std::string *newdescription){
    description = *newdescription;
}
void bot_command::SetAnswer(std::string *newanswer){
    answer = *newanswer;
}

    


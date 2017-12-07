#include "children.h"
#include <iostream>
#include <list>

children::children(std::string name, std::list<std::string> gifts)
{
    setName(name);
    setList(gifts);
}

void children::setName(std::string name){
        name_private = name;
        }
void children::setList(std::list<std::string> gifts){
        gifts_private = gifts;
        }

void children::displayList(){      //the function is created to make the code look less complicated in the main file
        for (std::list<std::string>::iterator it = gifts_private.begin(); it != gifts_private.end(); ++it)
        {
            std::cout << (*it) << " ";
        }
    }

void children::pushBack(std::string gift){ //making this function private for the class
        gifts_private.push_back(gift);
}

std::list<std::string> children::getList(){
        return gifts_private;
        }
std::string children::getName(){
        return name_private;
        }


children::~children()
{
    //dtor
}

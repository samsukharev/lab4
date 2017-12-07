#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "children.h"




int main()
{
    std::string theKid;
    std::string theGift;
    std::list<children> niceKids; //the list of objects

    std::cout << "name for nice list: ";
    getline(std::cin, theKid);

    while(theKid!=""){
        std::list<std::string> niceGifts; //the list of gifts that will go to the object.

        std::cout << "add gifts for " << theKid << std::endl;
        std::cout << "gift: ";
        getline(std::cin, theGift);

        children theChild(theKid, niceGifts);   //passing the variables to the class
        theChild.pushBack(theGift); //adding the gifts to the list

        while(theGift!=""){
            std::cout << "gift: ";
            getline(std::cin, theGift);
            theChild.pushBack(theGift);
        }

        niceKids.push_back(theChild); //adds the item to the list of the kids with objects

        std::cout << "name for nice list: ";
        getline(std::cin, theKid);
    }

    std::cout << "The list contains";
    for (std::list<children>::iterator it = niceKids.begin(); it != niceKids.end(); ++it)
        {
            children child = *it;
            std::cout << "\n" << child.getName() << " ";
            child.displayList();
        }

    return 0;
}

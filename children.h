#ifndef CHILDREN_H
#define CHILDREN_H
#include <string>
#include <list>


class children
{
    public:
        children(std::string name, std::list<std::string> gifts);
        void setName(std::string name);
        void setList(std::list<std::string> gifts);
        void displayList();
        void pushBack(std::string gift);

        std::list<std::string> getList();
        std::string getName();



        ~children();

    private:
        std::string name_private;
        std::list<std::string> gifts_private;
};

#endif // CHILDREN_H

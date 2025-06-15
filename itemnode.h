#ifndef ITEMNODE_H
#define ITEMNODE_H

#include <string>
using std::string;

class ItemNode {
public:
    string name;
    float price;
    ItemNode* aft;
    ItemNode* bef;

    ItemNode(string name, float price);
};

#endif  // ITEMNODE_H
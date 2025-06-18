#ifndef ITEMNODE_H
#define ITEMNODE_H

#include <string>
using std::string;

class ItemNode {
public:
    string name = "";
    float price = 0.0;
    ItemNode* aft = nullptr;
    ItemNode* bef = nullptr;

    ItemNode(const char* name, float price);
};

#endif  // ITEMNODE_H
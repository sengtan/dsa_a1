#include "itemnode.h"

ItemNode::ItemNode(string name, float price) {
    this->name = name;
    this->price = price;
    this->aft = nullptr;
    this->bef = nullptr;
}
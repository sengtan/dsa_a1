#include "itemnode.h"

ItemNode::ItemNode(const char* name = nullptr, float price = 0.0) {
    if (name == nullptr) {
        this->name = "";
    }
    else {
        this->name = name;
    }
    
    this->price = price;
    this->aft = nullptr;
    this->bef = nullptr;
}
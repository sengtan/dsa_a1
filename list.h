#ifndef LIST_H
#define LIST_H

#include "itemnode.h"

class List {
    private:
        ItemNode* head;
        ItemNode* tail;

    public:
        List();
        void task1(ItemNode* itemNode);
        void task2(ItemNode* itemNode);
        void task3();
        void task4(ItemNode* itemNode, int n);
        void task5(int n);
        void task6();
};

#endif // LIST_H
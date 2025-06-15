#include <iostream>
#include "list.h"

using namespace std;

List::List() {
    this->head = nullptr; // Initialize head to nullptr
    this->tail = nullptr; // Initialize tail to nullptr
}

// Task 1: Insert a new item node into an empty list
void List::task1(ItemNode* itemNode) {
    if (this->head == nullptr) {    // If the list is empty
        this->head = itemNode;      // Set head to the new item
        this->tail = itemNode;      // Set tail to the new item
    }
    else {                          // If the list is not empty
        this->tail->aft = itemNode; // Link the current tail to the new item
        itemNode->bef = this->tail; // Set the new item's previous pointer to the current tail
        this->tail = itemNode;      // Update the tail to the new item
    }
}

// Task 2: Insert a new item node in front of the list
void List::task2(ItemNode* itemNode) {
    if (this->head == nullptr) {    // If the list is empty
        this->head = itemNode;      // Set head to the new item
        this->tail = itemNode;      // Set tail to the new item
    }
    else {
        itemNode->bef = nullptr;    // Set the new item's previous pointer to nullptr
        itemNode->aft = this->head; // Link the new item to the current head
        itemNode->aft->bef = itemNode; // Set the current head's previous pointer to the new item
        this->head = itemNode;      // Update the head to the new item
    }
}

// Task 3: Print all data in the list in backward order
void List::task3() {
    if (this->tail == nullptr) {    // If the list is empty
        cout << "List is empty.\n";
    }
    else {
        ItemNode* current = this->tail; // Start from the tail
        cout << "Print backward:\n";
        while (current != nullptr) {    // Traverse backward until the head
            cout << "[" << current->name <<"\t" << current->price << "]\t";
            current = current->bef;     // Move to the previous item
        }
        cout << endl << endl;           // Print a new line at the end
    }
}

// Task 4: Insert a new item node at the middle of the list
void List::task4(ItemNode* itemNode, int n) {
    if (n < 2) {    // If n is less than 2, do nothing, as we cannot insert in the middle
        cout << "Invalid position, n must be greater than or equal to 2.\n";
    }
    else if (this->head == nullptr) {   // If the list is empty
        cout << "List is empty, unable to insert in the middle.\n";
    }
    else {
        ItemNode* current = this->head; // Start from the head
        bool found = false;             // Flag to check if position is found
        int count = 1;                  // Initialize count to track the position
        while (current != nullptr) {    // Loop through the list
            if (count == n) {           // If we reach the nth position
                found = true;           // Set found to true
                break;                  // Exit the loop
            }
            current = current->aft;     // Move to the next item
            count++;                    // Increment the count
        }

        if (found) {                        // If the nth position is found
            current->bef->aft = itemNode;   // Update the aft pointer of the node infront
            itemNode->bef = current->bef;   // Update the bef pointer of the new node
            itemNode->aft = current;        // Update the aft pointer of the new node
            current->bef = itemNode;        // Update the bef pointer of the current node
        }
        else {  // If the nth position is not found
            cout << "Position " << n << " is out of bounds, unable to insert.\n";
        }
    }
}

// Task 5: Delete the item node at the middle of the list
void List::task5(int n) {

}

// Task 6: Delete the last node in the list
void List::task6() {

}
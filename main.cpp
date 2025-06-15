//Program 1
/*Group Member List 
Member Name 1: Tan Zhuang Min
Matric Number: MEC245057
Section: 52
Member Name 2: Tan Seng Hooi
Matric Number: MEC245056
Section: 52
*/

#include <iostream>
#include <iomanip>
#include "itemnode.h"
#include "list.h"

using namespace std;

int main()
{ 
    List ItemList;
    ItemNode *n1 = new ItemNode("Book", 9.59); 
    ItemNode *n2 = new ItemNode("Ruler", 3.45); 
    ItemNode *n3 = new ItemNode("Pen", 5.69); 
    ItemNode *n4 = new ItemNode("Eraser", 2.25); 
    cout << fixed << setprecision(2) << left; 
    ItemList.task1(n1);
    ItemList.task2(n2); 
    ItemList.task3(); 
    ItemList.task4(n3, 2);
    ItemList.task4(n4, 2); 
    ItemList.task3();
    ItemList.task5(3);
    ItemList.task3(); 
    ItemList.task6(); 
    ItemList.task3();
    return 0;
}
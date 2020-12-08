#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "VerticalList.h"

using namespace std;

int main() {

    //part 1

    //creating the pointers
    Node *Nodefile1 = nullptr;
    Node *Nodefile2 = nullptr;
    Node *Nodefile3 = nullptr;
    Node *Nodefile4 = nullptr;
    Node *Nodefile5 = nullptr;

    // allocating the 5 nodes to the heap
    Nodefile1 = new Node();
    Nodefile2 = new Node();
    Nodefile3 = new Node();
    Nodefile4 = new Node();
    Nodefile5 = new Node();

    Nodefile1->setValue(-5); // assign data in first node
    Nodefile2->setValue(5); // assign data in second node
    Nodefile3->setValue(15); // assign data in third node
    Nodefile4->setValue(25); // assign data in forth node
    Nodefile5->setValue(35); // assign data in fifth node

    /*cout << Nodefile1->getValue() << endl; //for testing print
    cout << Nodefile2->getValue() << endl;//for testing print
    cout << Nodefile3->getValue() << endl;//for testing print
    cout << Nodefile4->getValue() << endl;//for testing print
    cout << Nodefile5->getValue() << endl;//for testing print
     */

    Nodefile1->setNext(Nodefile2);//setting the next Nodefile1 -> Nodefile2
    Nodefile2->setNext(Nodefile3);//setting the next Nodefile2 -> Nodefile3
    Nodefile3->setNext(Nodefile4);//setting the next Nodefile3 -> Nodefile4
    Nodefile4->setNext(Nodefile5);//setting the next Nodefile4 -> Nodefile5
    Nodefile5->setNext(nullptr);

    //printing the nodes!
    cout << "Part 1------->\n";
    Nodefile1->printNodes(Nodefile1);
         cout << endl;

    //part 2
    VerticalList list1;

    cout << "\nPart 2------->\n";
    cout << "List 1: ";
    list1.printNodes();//1
    list1.AddOne();
    cout << "\nList 1: ";
    list1.printNodes();//2

    VerticalList list2(list1); // Copy constructor  called here
    cout << "List 1: ";
    list1.AddOne();
    list1.printNodes();//2
    cout << "List 2: ";
    list2.printNodes();//2

    VerticalList list3;
    list3 = list1; // -	create a third list [list3] and then set it to list 1
    list3.AddOne();

    cout << "List 1: ";
    list1.printNodes();//2
    cout << "List 2: ";
    list2.printNodes();//2
    cout << "List 3: ";
    list3.printNodes();//2

    list1.AddOne();
    list2.AddOne();
    list3.AddOne();

    cout << endl;
    cout << "List 1: ";
    list1.printNodes();//2
    cout << "List 2: ";
    list2.printNodes();//2
    cout << "List 3: ";
    list3.printNodes();//2
    return 0;
}

//
// Created by Ricky Marly on 9/17/20.
//

#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head = 0;
}

void LinkedList::append(int value_in)
{
    if (head == 0)
    {
        head = new Node();
        head->setValue(value_in);
        head->setNext(0);
    }
    else
    {
        Node* myPtr = head;
        while (myPtr->getNext() != 0)
        {
            myPtr = myPtr->getNext();
        }
        myPtr->setNext(new Node());
        myPtr->getNext()->setValue(value_in);
        myPtr->getNext()->setNext(0);
    }
}

void LinkedList::print()
{
    Node* myPtr = head;
    while (myPtr != 0)
    {
        cout << myPtr->getValue() << " ";
        myPtr = myPtr->getNext();
    }
}
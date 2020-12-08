//
// Created by Ricky Marly on 9/23/20.
//

#include "VerticalList.h"
#include <iostream>
using namespace std;

VerticalList::VerticalList()
{
    head = 0;
    for(int i = 10; i<20;i++)
    {
        append(i);
    }
}

VerticalList::VerticalList(const VerticalList &listV)//constructor takes vertical list
{
    Node* prtNode = listV.head;

    while (prtNode != 0 )//if node is not 0
    {
        append(prtNode->getValue());//get the value
        prtNode = prtNode->getNext();//get the next of the value
    }
}

//adds int to nodes
void VerticalList::append(int value_in)//appends an int
{
    if (head == 0)//if head is 0
    {
        head = new Node();//head allocated to the head
        head->setValue(value_in);//value for head passsed
        head->setNext(0);//heads next is 0
    }
    else
    {
        Node* myPtr = head;
        while (myPtr->getNext() != 0)//if the next of myptr is not 0
        {
            myPtr = myPtr->getNext();//we get the next
        }
        myPtr->setNext(new Node());//allocated the next of the node to the heap
        myPtr->getNext()->setValue(value_in);//get the next of the value set it to cur value
        myPtr->getNext()->setNext(0);//next of ptr is 0
    }
}
//print nodes
void VerticalList::printNodes()
{
    Node* ptrNode = head;

    while (ptrNode != 0)//if node is not 0
    {
        cout << ptrNode->getValue() << " ";//gets the value
        ptrNode = ptrNode->getNext();//gets the next
    }
    cout << "\n";
}
//destructor
VerticalList::~VerticalList()//called implicitly
{
    std::cout <<"Destroyed Pointers\n";
    Node* ptrNode = head;//head
    while (ptrNode != 0)
    {
        Node* otherNext = ptrNode->getNext();
        //delete ptrNode;
        otherNext = ptrNode;
    }
    head = 0; //set head 0
}
void VerticalList::AddOne()//increaments one to the ints
{
    Node* ptrNode = head;//head

    while (ptrNode != 0)
    {
        ptrNode->setValue(ptrNode->getValue()+1);//add one to all nodes
        ptrNode = ptrNode->getNext();//gets the next
    }
}

void VerticalList::removeOne()//increaments one to the ints
{
    Node* ptrNode = head;//head

    while (ptrNode != 0)
    {
        ptrNode->setValue(ptrNode->getValue()-1);//add one to all nodes
        ptrNode = ptrNode->getNext();//gets the next
    }
}

VerticalList & VerticalList::operator=( VerticalList &rhs )//operator overload
{
   //Node* head = rhs.head;
   if(this != &rhs)
   {
       Node* ptrNode = rhs.head;//head

       int changeInt = ptrNode->getValue();
       //cout <<changeInt << "Change\n";//for testing

       swap(head, rhs.head);//change
       ptrNode = rhs.head;

       int changeIntAfter = ptrNode->getValue();

       //cout <<changeIntAfter << "Change After\n"; for testing

       int minus = changeInt-changeIntAfter;

       if((minus)>0)//positve val
       {
           for(int i = 0; i<minus;i++)
           {
               rhs.AddOne();
           }
       }
       else
       {
           for(int i = 0; i<minus;i++)
           {
               rhs.removeOne();
           }
       }
   }
   return *this;
}


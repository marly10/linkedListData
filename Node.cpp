//
// Created by Ricky Marly on 9/17/20.
//

#include "Node.h"
#include <iostream>
Node::Node()
{
    next = 0;
    value = 0;
}
Node::Node(int v, Node * next_in)
{
    value = v;
    next = next_in;
}
void Node::setValue(int v)
{
    value = v;
}
int Node::getValue()
{
    return value;
}

Node* Node::getNext()
{
    return next;
}
void Node::setNext(Node* theNewNext)
{
    next = theNewNext;
}

void Node::printNodes(Node* nodeFile)
{
    while (nodeFile != 0) {
        std::cout << nodeFile->getValue() << " ";
        nodeFile = nodeFile->getNext();
    }

}
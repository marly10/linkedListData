//
// Created by Ricky Marly on 9/17/20.
//

#ifndef LAB5_NODE_H
#define LAB5_NODE_H

#endif //LAB5_NODE_H

#pragma once

class Node
{
private:
    int value;
    Node* next;
public:
    Node();
    Node(int v, Node * next);
    void setValue(int v);
    int getValue();

    Node* getNext();
    void setNext(Node* theNewNext);
    void printNodes(Node *nodeFile);
};

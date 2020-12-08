//
// Created by Ricky Marly on 9/23/20.
//
#include "Node.h"
#include <iostream>

#ifndef LAB5_VERTICALLIST_H
#define LAB5_VERTICALLIST_H

#endif //LAB5_VERTICALLIST_H
#pragma once

class VerticalList{

public:
    VerticalList();
    void append(int value_in);
    VerticalList(const VerticalList &listV);
    void printNodes();
    ~VerticalList();
    void AddOne();
    void removeOne();
    VerticalList& operator=(VerticalList &rhs);

private:
    Node* head;
};
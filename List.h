// List.h

#include <iostream>
#include <string>
#include "ListNode.h"
#include "animal.h"
using namespace std;

#ifndef LIST_H
#define LIST_H

class List
{
  public:
    // constructor
    List();

    // ADT operations on linked list
    void insertAtFront(Animal *, string);
    bool removeNode(int);
    bool isEmpty() const;
    void print() const;

  private:
    ListNode* firstPtr;
    ListNode* lastPtr;
    ListNode* curr;
    ListNode* getNewNode(Animal *);
};

#endif

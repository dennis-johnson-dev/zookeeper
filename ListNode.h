// ListNode.h


#ifndef LISTNODE_H
#define LISTNODE_H

#include "animal.h"
using namespace std;

// forward declaration of class List so it can be used as a friend class (line 11)
class List;

class ListNode
{
  friend class List;

  public:
    // constructor
    ListNode(Animal*);
    Animal* getData() const;
  private:
    Animal* data;
    ListNode* nextPtr;
};

#endif

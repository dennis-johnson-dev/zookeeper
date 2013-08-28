// ListNode.cpp

#include "ListNode.h"
#include "animal.h"
using namespace std;

ListNode::ListNode(Animal* info)
  // initialize pointer value of node object to be null so it
  // has to be assigned later
  : data(info), nextPtr(NULL)
{

}

Animal* ListNode::getData() const 
{
  return data;
}

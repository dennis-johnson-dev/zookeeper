// ListNode.cpp

#include "ListNode.h"
#include "animal.h"
using namespace std;

ListNode::ListNode(Animal* info)
  : data(info), nextPtr(NULL)
{

}

Animal* ListNode::getData() const 
{
  return data;
}

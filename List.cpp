// List.cpp

#include "List.h"
#include "animal.h"
#include <string>
using namespace std;

List::List()
  : firstPtr(0), lastPtr(0)
{

}

void List::insertAtFront(Animal* animalPtr, string animalName)
{
  ListNode* newPtr = getNewNode(animalPtr);
  Animal* animalNamePtr = newPtr->data;
  animalNamePtr->setName(animalName);

  if (isEmpty()) {
    firstPtr = lastPtr = newPtr;
  } else {
    newPtr->nextPtr = firstPtr;
    firstPtr = newPtr;
  }   
  
  cout << "'";
  cout << animalNamePtr->getName() << "' the " << animalNamePtr->getType();
  cout << " has been added to the zoo!\n" << endl;
}

bool List::removeNode(int position)
{
  if (isEmpty()) {
    return false;
  } else {
    curr = firstPtr;
    ListNode* tempPtr = curr;

    // check if only one item is in list
    if (firstPtr == lastPtr) {
      firstPtr = lastPtr = 0;
    // special end case of position 1 in which there are no previous nodes
    } else if (position == 1) {
        firstPtr = firstPtr->nextPtr;
    } else {
        for (int i = 2; i < position; i++) {
        // starts at position 2 and moves current pointer to selected position
          curr = curr->nextPtr;
        }
        // set tempPtr to what is deleted
        tempPtr = curr->nextPtr;
        // move the previous node's nextPtr to the node after the position
        curr->nextPtr = tempPtr->nextPtr;
    }

    delete tempPtr;
    return true;
  }
}

bool List::isEmpty() const
{
  return firstPtr == 0;
}

ListNode* List::getNewNode(Animal* animalPtr)
{
  return new ListNode(animalPtr);
}

void List::print() const
{
  if (isEmpty()) {
    cout << "The list is empty\n" << endl; 
    return;
  }

  ListNode* currentPtr = firstPtr;
  Animal* animalPtr = currentPtr->data;
  int counter = 1;

  while (currentPtr != 0)
  {
    cout << counter << ") '";
		animalPtr = currentPtr->data;
    cout << animalPtr->getName() << "' the " << animalPtr->getType() << "\n";
		currentPtr = currentPtr->nextPtr;
    counter++;
  }

}

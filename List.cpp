// List.cpp

#include "List.h"
#include "animal.h"
#include <string>
using namespace std;

List::List()
  // assign null values to the first and last nodes of the linked list
  // (used for determining beginning and end of list)
  : firstPtr(0), lastPtr(0)
{

}

void List::insertAtFront(Animal* animalPtr, string animalName)
{
  // create new node
  ListNode* newPtr = getNewNode(animalPtr);
  // assign new node our passed animal pointer
  Animal* animalNamePtr = newPtr->data;
  // assign the passed name to our newly created animal
  animalNamePtr->setName(animalName);

  // if list is empty, assign initialization values
  if (isEmpty()) {
    firstPtr = lastPtr = newPtr;
  } else {
    // otherwise, insert new pointer just after the first node
    newPtr->nextPtr = firstPtr;
    firstPtr = newPtr;
  }   
  
  // confirmation to the user that the animal has been added
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

    // delete temporary pointer to help with garbage collection
    delete tempPtr;
    return true;
  }
}

bool List::isEmpty() const
{
  // if initialized, firstPtr would be equal to zero
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

  // start reviewing each pointer starting at the beginning of the list
  ListNode* currentPtr = firstPtr;
  Animal* animalPtr = currentPtr->data;
  int counter = 1;

  // count up the list and print the name and type of each animal
  while (currentPtr != 0)
  {
    cout << counter << ") '";
		animalPtr = currentPtr->data;
    cout << animalPtr->getName() << "' the " << animalPtr->getType() << "\n";
		currentPtr = currentPtr->nextPtr;
    counter++;
  }

}

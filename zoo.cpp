// zoo.cpp
// implementation of zoo class

#include <iostream>
#include <string>
#include "zoo.h"
#include "animal.h"
using namespace std;

Zoo::Zoo(){
  welcome();
  setCount();
}

void Zoo::feedingTime(){
  cout << "Feeding Time:" << endl; 
  if (animals[0] != NULL) {
		for (int i = 0; i < count; i++) {
			cout << animals[i]->getName() << " the " << animals[i]->getType();
			cout << " says '";
			animals[i]->talk();
			cout << "'\n" << endl;
		}
  }
}

void Zoo::list(){
  if (animals[0] != NULL) { // make sure list isn't empty
    for (int i = 0; i < count; i++) {
      cout << (i+1) << ") " << animals[i]->getName() << " the " << animals[i]->getType() << "\n" << endl;
    } 
  }
}

void Zoo::addAnimal(Animal * animalPtr, string animalName) {
  if (count <= 4) { 
    animalPtr->setName(animalName);
		animals[count] = animalPtr; 
		count++;
    cout << animalPtr->getName() << " has been added.\n" << endl;
  } else {
    cout << "Zoo is already full!!!" << endl;
  }
}

void Zoo::removeAnimal(Animal * animalPtr) {

}

void Zoo::welcome() {
  cout << "\nWelcome to the Zoo!\n" << endl;
}

void Zoo::setCount() {
  count = 0; 
}

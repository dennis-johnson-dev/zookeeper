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
  cout << "\nFeeding Time:" << endl; 
  for (int i = 0; i < count; i++) {
    cout << animals[i]->getName() << " the " << animals[i]->getType();
    cout << " says '";
    animals[i]->talk();
    cout << "'" << endl;
  }
  cout << "\n";
}

void Zoo::addAnimal(Animal * animalPtr) {
  if (count <= 4) { 
		animals[count] = animalPtr; 
		count++;
    cout << animalPtr->getName() << " has been added." << endl;
  } else {
    cout << "Zoo is already full!!!" << endl;
  }
}

void Zoo::welcome() {
  cout << "\nWelcome to the Zoo!\n" << endl;
}

void Zoo::setCount() {
  count = 0; 
}

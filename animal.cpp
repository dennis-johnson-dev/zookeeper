// animal.cpp

#include "animal.h"
#include <string>
using namespace std;

void Animal::setName(string animalName){
  name = animalName; 
}

string Animal::getName() {
  return name;
}

void Animal::setType(string animalType){
  type = animalType;
}

string Animal::getType() {
  return type;
}

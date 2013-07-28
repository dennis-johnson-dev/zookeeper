// monkey.cpp

#include <iostream>
#include "monkey.h"
#include <string>
using namespace std;

Monkey::Monkey(string animalName) {
  Animal::setName(animalName);
  Animal::setType("Monkey");
}

void Monkey::talk() const {
  cout << "Eep! Eep!";
}

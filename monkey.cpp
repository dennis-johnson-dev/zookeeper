// monkey.cpp

#include <iostream>
#include "monkey.h"
#include <string>
using namespace std;

Monkey::Monkey() {
  Animal::setType("Monkey");
}

void Monkey::talk() const {
  cout << "Eep! Eep!";
}

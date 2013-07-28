// birdy.cpp

#include <iostream>
#include "birdy.h"
#include <string>
using namespace std;

Birdy::Birdy(string animalName) {
  Animal::setName(animalName);
  Animal::setType("Birdy");
}

void Birdy::talk() const {
  cout << "Cheep! Cheep!";
}

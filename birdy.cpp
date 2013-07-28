// birdy.cpp

#include <iostream>
#include "birdy.h"
#include <string>
using namespace std;

Birdy::Birdy() {
  Animal::setType("Birdy");
}

void Birdy::talk() const {
  cout << "Cheep! Cheep!";
}

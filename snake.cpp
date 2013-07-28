// snake.cpp

#include <iostream>
#include "snake.h"
#include <string>
using namespace std;

Snake::Snake() {
  Animal::setType("Snake");
}

void Snake::talk() const {
  cout << "Sssss! Ssss!";
}

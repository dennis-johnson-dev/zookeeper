// zookeeper.cpp
// main function for zoo example

#include <iostream>
#include "animal.h"
#include "monkey.h"
#include "birdy.h"
#include "snake.h"
#include "zoo.h"
using namespace std;

int main() {
  // Create Zoo object
  Zoo zoo;

  // base class object
  Animal animalOne;
  // base class object
  Animal animalTwo;
  // derived class object
  Monkey monkey;
  // derived class object
  Monkey monkeyTwo;
  // derived class object
  Birdy birdMan;
  // derived class object
  Snake snakey;

  zoo.addAnimal(&animalOne);
  zoo.addAnimal(&animalTwo);
  zoo.addAnimal(&monkey);
  zoo.addAnimal(&monkeyTwo);
  zoo.addAnimal(&snakey);

  zoo.feedingTime();

} 

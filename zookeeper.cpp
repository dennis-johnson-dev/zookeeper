// zookeeper.cpp
// main function for zoo example

#include <iostream>
#include "animal.h"
#include "monkey.h"
#include "birdy.h"
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
  Birdy birdWoman;

  // base class pointer
  Animal *animalPtr = 0;
  
  animalPtr = &monkey;
  zoo.addAnimal(animalPtr);

  animalPtr = &animalOne;  
  zoo.addAnimal(animalPtr);

  animalPtr = &birdMan;
  zoo.addAnimal(animalPtr);
  
  animalPtr = &birdWoman;
  zoo.addAnimal(animalPtr);

  animalPtr = &monkey;  
  zoo.addAnimal(animalPtr);

  zoo.feedingTime();

} 

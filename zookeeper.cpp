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

  // derived class object
  Snake snakePliskin; 
  // derived class object
  Monkey monkey;
  // derived class object
  Monkey monkeyTwo;
  // derived class object
  Birdy birdMan;
  // derived class object
  Snake snakey;

  zoo.addAnimal(&snakePliskin);
  zoo.addAnimal(&birdMan);
  zoo.addAnimal(&monkey);
  zoo.addAnimal(&monkeyTwo);
  zoo.addAnimal(&snakey);

  zoo.feedingTime();

} 

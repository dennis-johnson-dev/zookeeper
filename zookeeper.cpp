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
  Snake snakePliskin("Snake"); 
  // derived class object
  Monkey monkey ("Monkey One");
  // derived class object
  Monkey monkeyTwo ("Monkey Two");
  // derived class object
  Birdy birdMan("Bird");
  // derived class object
  Snake snakey("Snake Two");

  zoo.addAnimal(&monkey);
  zoo.addAnimal(&snakePliskin);
  zoo.addAnimal(&monkeyTwo);
  zoo.addAnimal(&birdMan);
  zoo.addAnimal(&snakey);

  zoo.feedingTime();

} 

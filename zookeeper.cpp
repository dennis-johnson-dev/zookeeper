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
 
  // loop condition  
  bool continueSession = true;
  char input;
  
  while (continueSession) {
    // Output menu options
		cout << "What would you like to do?" << endl;
		cout << "(a) Add animal" << endl;
		cout << "(b) Remove animal" << endl;
		cout << "(c) FeedingTime!" << endl;
    cout << "(e) Exit" << endl;
    // get input from the user to select option
    cin >> input;

    cout << "\n";

    // declare variables for use in menu function
    Animal * animalPtr;
    string addAnimalName;
    char typeAnimal;

    // implement functionality of each choice
    switch(input) {
      case 'a':
        cout << "Please select which animal to add:" << endl; 
        // Display all available Animal types
        cout << "(a) Birdy" << endl;
        cout << "(b) Monkey" << endl;
        cout << "(c) Snake" << endl; 
        // Ask user for choice in options
        cin >> typeAnimal;
  
        cout << "\n";

        cout << "Please enter the animal's name:" << endl;
    
        cin >> addAnimalName;
        // Add desired animal by declaring dynamic data and sending pointer
        switch(typeAnimal) {
          case 'a':
            animalPtr = new Birdy(); 
            zoo.addAnimal(animalPtr, addAnimalName);
            break;
          case 'b':
            animalPtr = new Monkey(); 
            zoo.addAnimal(animalPtr, addAnimalName);
            break;
          case 'c':
            animalPtr = new Snake(); 
            zoo.addAnimal(animalPtr, addAnimalName);
            break;
        }
        break;
      case 'b':
        cout << "Removing animal!" << endl;
        break;
      case 'c':
         zoo.feedingTime();
         break;
      case 'e':
         cout << "Exit!" << endl;
         continueSession = false;
    } 
  }
} // End Main 

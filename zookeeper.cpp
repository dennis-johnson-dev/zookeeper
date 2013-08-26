// zookeeper.cpp
// main function for zoo example

#include <iostream>
#include <string>
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
    int selectAnimal;
    int exit = 0;

    // implement functionality of each choice
    switch(input) {
      case 'a':
        do {
        exit = 0;
        cout << "Please select which animal to add:" << endl; 
        // Display all available Animal types
        cout << "(a) Birdy" << endl;
        cout << "(b) Monkey" << endl;
        cout << "(c) Snake" << endl; 
        // Ask user for choice in options
        cin >> typeAnimal;
  
        cout << "\n";
    
        // Add desired animal by declaring dynamic data and sending pointer
        switch(typeAnimal) {
          case 'a':
            animalPtr = new Birdy(); 
            break;
          case 'b':
            animalPtr = new Monkey(); 
            break;
          case 'c':
            animalPtr = new Snake(); 
            break;
          default:
            cout << "Pleae enter a valid value\n" << endl;
            exit = 1; 
            cout << exit << endl;
            break;
        } 
        } while (exit == 1); 
            

        cout << "Please enter the animal's name:" << endl;
     
        // ignores the '\n' character input from the previous cin
        cin.ignore(); 
        getline(cin, addAnimalName);

        zoo.animalList.insertAtFront(animalPtr, addAnimalName);
        break;
      case 'b':
        cout << "Which animal do you want to remove?" << endl;  
        zoo.animalList.print();

        cin >> selectAnimal;

        // need to validate user input

        zoo.animalList.removeNode(selectAnimal);
        cout << "Animal is removed\n" << endl;  
        break;
      case 'c':
        cout << "Feeding Time!" << endl;
        zoo.animalList.print();
        cout << "\n";
        break;
      case 'e':
        cout << "Exit!\n" << endl;
        continueSession = false;
        break;
      default:
        cout << "Please enter a valid value:\n" << endl;
        break;
    } 
  }
} // End Main 

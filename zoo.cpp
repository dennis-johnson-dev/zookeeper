// zoo.cpp
// implementation of zoo class

#include <iostream>
#include "zoo.h"
#include "animal.h" 
using namespace std;

Zoo::Zoo(){
  welcome();
}

void Zoo::welcome() {
  cout << "\nWelcome to the Zoo!\n" << endl;
}


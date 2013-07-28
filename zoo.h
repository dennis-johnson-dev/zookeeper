// zoo.h
// zoo header file

#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include <string>

using namespace std;

class Zoo {
  public:
    Zoo();
    void feedingTime();
    void addAnimal(Animal *, string);
    void welcome();
    void setCount();

  private:
    int count;
    Animal * animals[5]; 
};

#endif

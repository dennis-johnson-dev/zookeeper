// zoo.h
// zoo header file

#ifndef ZOO_H
#define ZOO_H
#include "animal.h"
#include "List.h"

using namespace std;

class Zoo {
  public:
    Zoo();
    void welcome();
    List animalList;
    
  private:
};

#endif

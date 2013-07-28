// birdy.h
#ifndef BIRDY_H
#define BIRDY_H

#include "animal.h"
#include <string>
using namespace std;

class Birdy : public Animal
{
  public:
    Birdy();
    virtual void talk() const;
};

#endif

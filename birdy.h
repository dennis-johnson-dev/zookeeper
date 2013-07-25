// birdy.h
#ifndef BIRDY_H
#define BIRDY_H

#include "animal.h"
using namespace std;

class Birdy : public Animal
{
  public:
    virtual void talk() const;
};

#endif

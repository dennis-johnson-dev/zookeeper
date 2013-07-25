// monkey.h
#ifndef MONKEY_H
#define MONKEY_H

#include "Animal.h"
using namespace std;

class Monkey : public Animal
{
public:
  virtual void talk() const;
};

#endif

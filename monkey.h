// monkey.h
#ifndef MONKEY_H
#define MONKEY_H

#include "animal.h"
#include <string>
using namespace std;

class Monkey : public Animal
{
public:
  Monkey ();
  virtual void talk() const;
};

#endif

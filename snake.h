// snake.h
#ifndef SNAKE_H
#define SNAKE_H

#include "animal.h"
using namespace std;

class Snake : public Animal
{
  public:
    virtual void talk() const;
};

#endif

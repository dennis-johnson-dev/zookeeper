// snake.h
#ifndef SNAKE_H
#define SNAKE_H

#include "animal.h"
#include <string>
using namespace std;

class Snake : public Animal
{
  public:
    Snake();
    virtual void talk() const;
};

#endif

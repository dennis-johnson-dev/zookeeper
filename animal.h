// animal.h
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal 
{
  public: 
    virtual void talk() const = 0;
    void setName(string);
    string getName();
    void setType(string);
    string getType();
  private:
    string name; 
    string type;
};

#endif

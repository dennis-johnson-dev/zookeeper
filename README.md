zookeeper
=============

c++ program that utilizes the concept of a zoo to demonstrate classes and ADTs

DESCRIPTION:
This program creates a zoo object that can house an array of pointers to Animal objects. The Animal class is an abstract data type (pure virtual function) and I am creating child classes to inherit from it. 

By using virtual functions, I am able to store the derived class objects as pointers to base class objects while still allowing the derived class to function with its overridden virtual members. 

Currently only have one function - talk() which each derived class animal implements differently.

USAGE:
Using gcc version 4.2.1

zookeeper.cpp contains main()

To execute the program - $g++ *.cpp;./a.out

Program shows menu for user to navigate:

addAnimal

removeAnimal(needs to be implemented)

feedingTime - each animal outputs a phrase specific to it along with its name
exit

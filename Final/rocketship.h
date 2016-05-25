#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::stringstream;
 
 class RocketShip {
     
    public:
       RocketShip();
       void setName(string theName);
       string getName() const;
       void setFuel(unsigned int theFuel);
       unsigned int getFuel() const;
       void addFuelCell(unsigned int fuelAmount);
       bool removeFuelCell(unsigned int cellNumber);
       bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
       string burnFuel(unsigned int cellNumber);
       
     private:
       string name;
       unsigned int fuel;
       vector<unsigned int> fuelCells;
       vector<unsigned int>::iterator iter;
 };
 
 #endif
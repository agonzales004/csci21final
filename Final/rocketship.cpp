/*
 * Name        : Rocketship.cpp
 * Author      : Anthony Gonzales
 * Description : Final/rocketship
 */
 
#include "rocketship.h"
 
 RocketShip::RocketShip()
 {
     name = "RS NullPointer";
     fuel = 1000;
 }
 
 void RocketShip::setName(string theName)
 {
     name = theName;
 }
 
 string RocketShip::getName() const
 {
     return name;
 }
 
 void RocketShip::setFuel(unsigned int theFuel)
 {
     fuel = theFuel;
 }
 
 unsigned int RocketShip::getFuel() const
 {
     return fuel;
 }
 
 void RocketShip::addFuelCell(unsigned int fuelAmount) 
{
    iter = fuelCells.begin();
    iter = fuelCells.insert (iter, fuelAmount);
}

bool RocketShip::removeFuelCell(unsigned int cellNumber) 
{
    bool fuelRemoved;
    if((fuelCells.size() > 0) &&(cellNumber < fuelCells.size()))
    {
        fuelCells.erase(fuelCells.begin() + cellNumber);
        fuelRemoved = true;
    } else
    {
        fuelRemoved = false;
    }
    return fuelRemoved;
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    bool fuelAdded;
    if((fuelCells.size() > 0) && (cellNumber < fuelCells.size()))
    {
        iter = fuelCells.begin();
        fuelCells.insert (iter + cellNumber, fuelAmount);
        unsigned int vectorFuel = fuelCells.at(cellNumber);
        if(vectorFuel == fuelAmount)
        {
            fuelAdded = true;
        } else
        {
            fuelAdded = false;
        }
    } else 
    {
        fuelAdded = false;
    }
    return fuelAdded;
}

string RocketShip::burnFuel(unsigned int cellNumber) 
{
    stringstream fuelGone;
    string fuel_;
    if((fuelCells.size() > 0) && (cellNumber < fuelCells.size()))
    {
        unsigned int burnedFuel = fuelCells.at(cellNumber);
        if(burnedFuel > 0)
        {
            for(unsigned int i = 0; i < burnedFuel; i++)
            {
                fuelGone << "*";
            }
            fuel_ = fuelGone.str();
        }
        fuelCells.at(cellNumber) = 0;
    } else
    {
        fuel_ = "";
    }
    return fuel_;
}
 
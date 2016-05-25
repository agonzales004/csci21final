/*
 * Name        : specialrocketship.cpp
 * Author      : Anthony Gonzales
 * Description : Special rocket final
 */

#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip() 
{
    name = "RS Cloaky";
    fuel = 1000;
    cloaked = false;
}

void SpecialRocketShip::setCloaked(bool thisCloaked) 
{
    cloaked = thisCloaked;
}

bool SpecialRocketShip::getCloaked() const
{
    return cloaked;
}
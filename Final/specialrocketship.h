#ifndef SPECIALROCKET_H
#define SPECIALROCKET_H

#include "rocketship.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::stringstream;

class SpecialRocketShip: public RocketShip {
    
     public:
        SpecialRocketShip();
        void setCloaked(bool thisCloaked);
        bool getCloaked() const;
        
     private:
        bool cloaked;
};

#endif
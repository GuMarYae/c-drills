#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <cstdlib>

#include "Spin.h"

///////////////
// constructors
///////////////
Spin::Spin()
{
    getSmallSpin();
}
/////////////
// destructor
/////////////
Spin::~Spin() {}

/////////////
// functions
/////////////
std::string Spin::getSmallSpin()
{
    low_ = "Low mode is now active";
    return low_;
}
std::string Spin::getMediumSpin()
{
    medium_ = "Mediim mode is now active";
    return medium_;
}
std::string Spin::getHighSpin()
{
    high_ = "High mode is now active";
    return high_;
}



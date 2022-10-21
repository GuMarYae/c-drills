#ifndef SPIN_H
#define SPIN_H
#include <iostream>


class Spin
{

private:
    // internals
    std::string low_;
    std::string medium_;
    std::string high_;
   

public:
    // constructors
    Spin();

    // destructor
    ~Spin();

    // getters
    std::string getSmallSpin();
    std::string getMediumSpin();
    std::string getHighSpin();
    // functions
    
};

#endif
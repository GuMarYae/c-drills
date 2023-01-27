#ifndef SPIN_H
#define SPIN_H
#include <iostream>
#include <string>

class SpinCycle
{

private:
    std::string normal;
    std::string extra;

public:
    // constructors
    SpinCycle();
    // destructors
    ~SpinCycle();
    // getters
    std::string getNormal() const;
    std::string getExtra() const;
};

#endif
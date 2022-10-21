#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <cstdlib>

#include "./Spin.h"
//#include "spin.cpp"

// g++ -o test driver.cpp spin.cpp

int main()
{
    int option;
    
    Spin spin;
    for (int i = 0; i <= option; i++)
    {
        std::cout << "Enter spin option: \n 1: Low rpm \n 2: Medium rpm \n 3: High rpm" << std::endl;
        std::cin >> option;
        // if (option < 1 || option > 3)
        // {
        //     std::cout << "invalid option\n";
        // }
        if (option == 1)
        {
            std::cout << spin.getSmallSpin() << std::endl;
            return option;
        }
        else if (option == 2)
        {
            std::cout << spin.getMediumSpin() << std::endl;
            return option;
        }
        else if (option == 3)
        {
            std::cout << spin.getHighSpin() << std::endl;
            return option;
        }
        else
            std::cout << "\n invlid selection\n";
    }

    return 0;
};
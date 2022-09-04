#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>

int main()
{
    int count = 7;
    int *pCount = &count; // pointer count = the address of count

    // being that int* pCount and int *pCount are the same
    // seeing that pCount and *pCount are different botherts me. So remember
    // that *pCount points to a number and pCount is an address

    std::cout << count << "\n"   // 7
              << *pCount << "\n" // 7
              << &count << "\n"  // address
              << pCount << "\n"  // address
              << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << std::endl;
    std::cout << ++count << "\n"
              << (*pCount)++ << "\n"
              << pCount++ << "\n";

    return 0;
}

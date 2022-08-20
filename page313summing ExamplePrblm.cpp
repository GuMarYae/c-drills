#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

int main()
{

#include <iostream>
    using namespace std;

    int matrix[4][4] =
        {{1, 2, 3, 4},
         {4, 5, 6, 7},
         {8, 9, 10, 11},
         {12, 13, 14, 15}};
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum += matrix[i][i]; // its basically saying whats [0][0]+[1][1]+[2][2]+[3][3]
                             // so, whats 1+5+10+15
    std::cout << sum << std::endl;
    return 0;
}
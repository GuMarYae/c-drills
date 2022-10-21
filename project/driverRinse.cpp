#include <string>
#include <iostream>
#include "Rinse.h"
// g++ -o test driverRinse.cpp rinse.cpp

using namespace std;
int main()
{	
    for ( int i = 0; i < 4; i++)
	{
    	int choice = 0;
    	cout << "Please choose from the available Rinse options\n";
    	cout << "1: Low\n";
    	cout << "2: Medium\n";
    	cout << "3: High\n";
    	
    	cin >> choice;
    	RinseCycle A;
    	switch (choice)
		{
			case 1: cout << A.getLowCycle(); break;
			case 2: cout << A.getMediumCycle(); break;
			case 3: cout << A.getHighCycle(); break;
			
		}
	}

	return 0;
}
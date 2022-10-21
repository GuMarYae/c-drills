#include <string>
#include "Rinse.h"
using namespace std;


//default constructor
RinseCycle::RinseCycle()
{
	
	getLowCycle();
}

string RinseCycle::getLowCycle()
{	
	low = "Rinse set to low.\n";
	return low;
}

string RinseCycle::getMediumCycle()
{	
	medium = "Rinse set to medium.\n";
	return medium;
}

string RinseCycle::getHighCycle()
{	
	high = "Rinse set to high.\n";
	return high;
}


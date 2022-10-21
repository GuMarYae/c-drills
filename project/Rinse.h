#ifndef RINSE_H
#define RINSE_H
#include <string>
using namespace std;
class RinseCycle
{
	//Private members
	private:
		string low;
		string medium;
		string high;
		
	//Public member functions
	public:
		RinseCycle();
		string getLowCycle();
		string getMediumCycle();
		string getHighCycle();
		
		
};
#endif 
		
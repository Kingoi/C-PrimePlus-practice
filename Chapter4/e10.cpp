#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<double,3> results;
	int i;
	double ave;
	cout << "Please enter your results: " << endl;
	for (i=0; i<3; i++)
	{
	    cin >> results[i]; 
	}
	ave = (results[0]+results[1]+results[2])/3;
	cout << "Your average result is: " << ave << endl;
	return 0;
}

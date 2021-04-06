#include <iostream>

using namespace std;
double longToYards(double);

int main()
{
	double a;
	double a_y;
	cout << "Please enter the distance as long:" ;
	cin >> a ;
	a_y = longToYards (a);
	cout << "The distance as yards is:" << a_y << endl; 
}

double longToYards(double x)
{
	return 220*x;
}

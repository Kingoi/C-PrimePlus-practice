#include <iostream>

using namespace std;
double lightyearCal(double);

int main()
{
	double a;
	double a_y;
	cout << "Enter the number of light years: " ;
	cin >> a ;
	a_y = lightyearCal (a);
	cout << a << " light years = " << a_y << " astronomical units." << endl; 
}

double lightyearCal(double x)
{
	return 63240*x ;
}

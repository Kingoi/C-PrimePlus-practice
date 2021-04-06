#include <iostream>

using namespace std;
double temCal(double);

int main()
{
	double a;
	double a_y;
	cout << "Please enter a Celsius value: " ;
	cin >> a ;
	a_y = temCal (a);
	cout << a << " degrees Celsius is " << a_y << " degrees Fahrenheit." << endl; 
}

double temCal(double x)
{
	return 1.8*x + 32;
}

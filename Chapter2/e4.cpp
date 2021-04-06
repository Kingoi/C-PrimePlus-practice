#include <iostream>

using namespace std;
double monthsCal(double);

int main()
{
	double a;
	double a_y;
	cout << "Enter your age:" ;
	cin >> a ;
	a_y = monthsCal (a);
	cout << "Your age equals:" << a_y << endl; 
}

double monthsCal(double x)
{
	return 12*x;
}

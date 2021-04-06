#include <iostream>
using namespace std;
void timeDemo(double,double);

int main()
{
	double h,m ;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	timeDemo(h,m);
}

void timeDemo(double x, double y)
{
	cout << "Time: " << x <<":" << y << endl;  
}

#include <iostream>

int main()
{
	using namespace std;
	int degree, minute, second;
	cout << "Enter a latitude in degrees, minutes and seconds: " << endl;
	cout << "First, enter the degrees: " ;
	cin >> degree;
	cout << "Second, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	double result = degree + minute / 60.0 + second / 3600.0;
	cout << degree << "degrees, " << minute << " minutes, " << second << " seconds = " << result << endl;
}

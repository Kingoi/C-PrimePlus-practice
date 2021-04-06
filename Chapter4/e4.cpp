#include <iostream>
#include <string>


int main()
{
	using namespace std;
	string fname, lname;
	cout << "Enter your first name: " << endl;
	cin >> fname;
	cout << "Enter your last name: " << endl;
	cin >> lname;
	lname = lname + ", " +fname;
	cout << "Here's the information in a single string: " << lname << endl;
	return 0;
}


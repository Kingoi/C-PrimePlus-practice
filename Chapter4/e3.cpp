#include <iostream>
#include <cstring>


int main()
{
	using namespace std;
	char fname[10], lname[10], m_name[10], f_name[10];
	char m[10];
	cout << "Enter your first name: " << endl;
	cin >> fname;
	cout << "Enter your last name: " << endl;
	cin >> lname;
	strcat(lname, ", ");
	strcat(lname, fname);
	cout << "Here's the information in a single string: " << lname << endl;
	return 0;
}


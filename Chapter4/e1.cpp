#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fname, lname;
	char grade;
	int age;
	int i_grade;
	cout << "What is your first name?" << endl;
	getline(cin,fname);
	cout << "What is your last name?" << endl;
	getline(cin,lname);
	cout << "What letter grade do you deserve?" << endl;
	cin >> grade;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "Name: " << lname << ", " << fname << endl;
	i_grade = grade + 1;
	cout << "Grade: ";
	cout.put(i_grade);
	cout << endl;
	cout << "Age: " << age <<endl;
	return 0;
}

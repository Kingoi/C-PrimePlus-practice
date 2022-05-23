#include <iostream>
#include <vector>
#include <string>
int main()
{
	using namespace std;
	vector<string> month = {"January", "February","March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	vector<int> sales;
	sales.resize(month.size());
	for (int i = 0; i < month.size(); i++) {
		cout << "Enter the sales of " << month[i] << ": ";
		cin >> sales[i];
	}
	int sum;
	for (int i = 0; i < sales.size(); i++) {
		sum+= sales[i];
	}
	cout << "The sales of the whole year is: " << sum <<endl;
}

#include <iostream>
#include <vector>
#include <string>
int main()
{
	using namespace std;
	vector<string> month = {"January", "February","March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	vector<vector<int>> allsales;
	
	for (int j = 0; j < 3; j++) {
		vector<int> sales(month.size());
	    for (int i = 0; i < month.size(); i++) {
		    cout << "Enter the sales of " << month[i] << " of year " << j + 1 <<": ";
		    cin >> sales[i];
	    }
	    allsales.emplace_back(sales);
    }
    int allsum;
	for (int i = 0; i < allsales.size(); i++) {
		int sum = 0;
		for (int j = 0; j < allsales[i].size(); j++) {
			sum += allsales[i][j];
		}
		allsum += sum;
		cout << "The sales of the year " << i + 1 << " is: " << sum <<endl;
	}
	cout << "The sales of three years: " << allsum <<endl;
}

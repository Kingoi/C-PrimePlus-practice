#include <iostream>
using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int calorie;
};

int main()
{
	CandyBar snack= {"Mocha Munch", 2.3, 350};
	cout << "The brand is: " << snack.brand << endl;
	cout << "The weight is: " << snack.weight << endl;
	cout << "The calorie is: " << snack.calorie << endl;
	return 0;
}

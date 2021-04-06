#include <iostream>
using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int calorie;
};
void outputstruct(CandyBar);

int main()
{
	CandyBar snack[3] =
	{
	    {"Mocha Munch1", 2.1, 350},
	    {"Mocha Munch2", 2.2, 360},
	    {"Mocha Munch3", 2.3, 370}
	};
	outputstruct(snack[0]);
	outputstruct(snack[1]);
	outputstruct(snack[2]);
	return 0;
}

void outputstruct(CandyBar a)
{
	cout << "The brand is: " << a.brand << endl;
	cout << "The weight is: " << a.weight << endl;
	cout << "The calorie is: " << a.calorie << endl;
}

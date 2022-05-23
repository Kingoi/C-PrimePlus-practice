#include <iostream>

int main()
{
	using namespace std;
    int height = 0;
    int height_ft = 0, height_in = 0;
    const int scale = 12;
    cout << "Please enter you height with the unit of inches:___" << endl;
    cin >> height;
	height_ft = height / scale;
	height_in = height % scale;
	cout << "Height is " << height_ft << " foot " << height_in << " inches" << endl;
}

#include <iostream>

int main()
{
	double consumption_eu;
	double consumption_am;
	std::cout << "Enter oil consumption is eu style: ";
	std::cin >> consumption_eu;
	consumption_am = 1 / (consumption_eu / 3.785 / 62.14);
	std::cout << consumption_eu << " L/km = " << consumption_am << " mpg." << std::endl;
}

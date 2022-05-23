#include <iostream>

int main()
{
	double sum;
	std::cout << "Enter a number:";
	double a;
	std::cin >> a;
	while (a != 0) {
		sum += a;
		std::cout << "Current sum is: " << sum << std::endl;
		std::cin >> a;
	}
}

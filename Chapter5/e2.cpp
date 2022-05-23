#include <iostream>
#include <array>

int main()
{
	std::array<double, 100> x;
	for (int i = 0; i < 100; i++) {
		x[i] = i + 1;
	}
	long double value = 1.0;
	for (int i = 0; i < 100; i ++) {
		value *= (i+1);
	}
	std::cout << "100! = " << value << std::endl;
}

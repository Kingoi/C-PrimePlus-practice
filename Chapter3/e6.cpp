#include <iostream>

int main()
{
	double distance, gas_volumn;
	std::cout << "Enter driving distance (miles): ";
	std::cin >> distance;
	std::cout << "Enter gas usage (galon): ";
	std::cin >> gas_volumn;
	
	std::cout << "The gas consumption is: " << gas_volumn / distance << " galon/mile" << std::endl;
}

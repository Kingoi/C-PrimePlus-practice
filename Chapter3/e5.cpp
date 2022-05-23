#include <iostream>

int main()
{
	long long int p_am;
	long long int p_glb;
	
	std::cout << "Enter the world's population: ";
	std::cin >> p_glb;
	std::cout << "Enter the population of US: ";
	std::cin >> p_am;
	double ratio = (double)p_am / p_glb;
	std::cout << "The population of the US is " << ratio * 100 << "% of the world population." << std::endl;
} 

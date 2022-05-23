#include <iostream>

int main()
{
	double account1 = 100, account2 = 100;
	int x = 0;
	do {
		x++;
		account1 += 100 * 0.1;
		account2 *= 1.05;
	} while (account2 <= account1);
	std::cout << "Cleo's profit will exceed Daphne's profit at the " << x << " year." << std::endl;
	std::cout << "Cleo's profit: " << account2 << std::endl;
	std::cout << "Daphne's profit: " << account1 << std::endl;
}

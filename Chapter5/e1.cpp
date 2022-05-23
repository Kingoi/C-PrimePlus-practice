#include <iostream>

int main()
{
	int v1, v2;
	std::cout << "Enter the smaller number: ";
	std::cin >> v1;
	std::cout << "Enter the larger number: ";
	std::cin >> v2;
	
	int sum1;
	int a1 = v1;
	int a2 = v2;
	if (a1 == a2) {
		sum1 = a1;
	} else {
        do {
		    sum1 += a1;
		    a1++;
	    } while (a1 <= a2);
    }
	std::cout << "The sum using do-while-loop is: " << sum1 << std::endl;
	
	int sum2;
	int b1 = v1;
	int b2 = v2;
	for (int i = b1; i <= b2; i++) {
		sum2 += i;
	}
	std::cout << "The sum using for-loop is: " << sum2 << std::endl;
	
	int sum3;
	int c1 = v1;
	int c2 = v2;
	while (c1 <= c2) {
		sum3 += c1;
		c1++;
	}
	std::cout << "The sum using while-loop is: " << sum3 << std::endl;
}

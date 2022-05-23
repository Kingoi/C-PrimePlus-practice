#include <iostream>

int main()
{
	long int time;
	int day, hour, minute, second;
	std::cout << "Enter the number of second: ";
	std::cin >> time;
	
	const int d2h = 24;
	const int h2m = 60;
	const int m2s = 60;
	
	day = time / (d2h * h2m * m2s);
	double time1 = time - day * d2h * h2m * m2s;
	hour = time1 / (h2m * m2s);
	time1 = time1 - hour * h2m * m2s;
	minute = time1 / m2s;
	time1 = time1 - minute * m2s;
	second = time1;
	
	std:: cout << time << " seconds = "<< day <<" days, "<< hour <<" hours, " << minute << " minutes, "<< second << " seconds" << std::endl;
}

#include <iostream>

int main()
{
	using namespace std;
	const double c1 = 12;
	const double c2 = 0.0254;
	const double c3 = 2.2;
	double h_ft, h_in;
	double wt_pd;
	cout << "Enter height with ft and in as units: ___" << endl;
	cin >> h_ft >> h_in;
	cout << "Enter weight with pound as unit: ___" << endl;
	cin >> wt_pd;
	double h_m = (h_ft * c1 + h_in) * c2;
	double wt_kg = wt_pd / c3;
	double bmi = wt_kg / h_m / h_m;
	cout << "Your BMI index is: " << bmi;
}

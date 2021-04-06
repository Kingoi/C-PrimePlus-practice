#include <iostream>
#include <string>

using namespace std;

struct PizzaInfo
{
	string company_name;
	double diameter, weight;
};

void outputstruct(PizzaInfo);

int main()
{
	//使用new给结构体c1分配动态内存 
	PizzaInfo *c1 = new PizzaInfo;	
	cout << "Please enter the name of the company: " << endl;
	getline(cin,c1->company_name);
	cout << "Please enter the diameter of the pizza" << endl;
	cin >> c1->diameter;
	cout << "Please enter the weight of the pizza" << endl;
	cin >> c1->weight;
	//此处传递进函数的为指针c1指向地址的内容，所以函数中的a为一个结构体，而不是指针 
	outputstruct(*c1);
	delete c1;
	return 0;
}

//此处a为一个结构体，而不是结构体指针 
void outputstruct(PizzaInfo a)
{
	cout << "The company name is: " << a.company_name << endl;
	cout << "The diameter of the pizza is: " << a.diameter << endl;
	cout << "The weight of the pizza is: " << a.weight << endl;
}

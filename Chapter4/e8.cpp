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
	//ʹ��new���ṹ��c1���䶯̬�ڴ� 
	PizzaInfo *c1 = new PizzaInfo;	
	cout << "Please enter the name of the company: " << endl;
	getline(cin,c1->company_name);
	cout << "Please enter the diameter of the pizza" << endl;
	cin >> c1->diameter;
	cout << "Please enter the weight of the pizza" << endl;
	cin >> c1->weight;
	//�˴����ݽ�������Ϊָ��c1ָ���ַ�����ݣ����Ժ����е�aΪһ���ṹ�壬������ָ�� 
	outputstruct(*c1);
	delete c1;
	return 0;
}

//�˴�aΪһ���ṹ�壬�����ǽṹ��ָ�� 
void outputstruct(PizzaInfo a)
{
	cout << "The company name is: " << a.company_name << endl;
	cout << "The diameter of the pizza is: " << a.diameter << endl;
	cout << "The weight of the pizza is: " << a.weight << endl;
}

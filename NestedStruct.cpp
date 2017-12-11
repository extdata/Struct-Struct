#include <iostream>
using std::cout;
using std::cin;

struct person
{
	char name[50];
	int age;
	float salary;
};
struct company
{
	person id;
	char companyname[50];
};

int main()
{
	company c1;
	
	
	cout << "Digite seu nome: ";
	cin.get( c1.id.name, 50 );
	cout << "\nDigite sua idade: ";
	cin >> c1.id.age;
	cout << "\nDigite seu salario: ";
	cin >> c1.id.salary;
	cout << "\nDigite o nome da empresa onde trabalha: ";
	cin >> c1.companyname;
	
	cout << "\nExibidos suas informa" << char(135) << char(228) << "es!";
	cout << "\nNome da empresa: " << c1.companyname;
	cout << "\nNome: " << c1.id.name;
	cout << "\nIdade: " << c1.id.age;
	cout << "\nSal" << char(160) << "rio: " << c1.id.salary;
	
	return 0;
}
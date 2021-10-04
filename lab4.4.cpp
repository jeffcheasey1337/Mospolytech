#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, min, mnozh;
	double chast;
	cout << "Введите первое число \n";
	cin >> a ;
	cout << "Введите второе число \n";
	cin >> b;
	sum = pow(a, 2) + pow(b, 2);
	min = pow(a, 2) - pow(b, 2);
	mnozh = pow(a, 2) * pow(b, 2);
	chast = (double)pow(a, 2) / pow(b, 2);
	cout << "Сумма:" << sum << "\n" << "Разность: " << min << "\n" << "Умножение: " << mnozh << "\n" << "Частное: " << chast << "\n";
}
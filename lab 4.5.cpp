#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, min, mnozh;
	double chast;
	cout << "Введите первое число \n";
	cin >> a;
	cout << "Введите второе число \n";
	cin >> b;
	sum = abs(a) + abs(b);
	min = abs(a) - abs(b);
	mnozh = abs(a) * abs(b);
	chast = (double)abs(a) / abs(b);
	cout << "Сумма:" << sum << "\n" << "Разность:" << min << "\n" << " Произведение:" << mnozh << "\n" << "Частное: " << chast << "\n";
}
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int S, a, b, P;
	cout << "Введите длинну прямоугольника: ";
	cin >> a;
	cout << "Введите ширину прямоугольника: ";
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь: " << S << "\n" << "Периметр: " << P << "\n";
}
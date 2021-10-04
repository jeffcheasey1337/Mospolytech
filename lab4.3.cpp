#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	double ar;
	cout << "Введите первое число:\n ";
	cin >> a ;
	cout << "Введите второе число:\n ";
	cin >> b;
	ar = (double)(a + b) / 2;
	cout << "Средне арефмитическое:" << ar << "\n";
}
#include<iostream>
double const pi = 3.14;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int d;
	double L;
	cout << "¬ведите диаметр окружности: ";
	cin >> d;
	L = pi * d;
	cout << "ƒлина окружности: " << L << "\n";
}
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

double func(double x, double exp = 2.7182818284)
{
	return x * pow(exp, x) - 1;
}
double perv(double x, double exp = 2.7182818284)
{
	return pow(exp, x) * (1 + x);
}
double vtor(double x, double exp = 2.7182818284)
{
	return pow(exp, x) * (2 + x);
}



int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, x1, xn, eps;
	int iter = 0;
	cout << "Метод Ньютона для функции y = x*e^(x)-1" << endl;
	cout << endl;
	cout << "Введит концы отрезка:" << endl;
	cin >> a >> b;
	cout << "Введите точность:" << endl;
	cin >> eps;
	if (func(a) * vtor(a) > 0)
	{
		x1 = a;
	}
	else
	{
		x1 = b;
	}
	
	
	do
	{
		xn = x1;
		x1 = xn - func(xn) / perv(xn);
		cout << "xn= " << xn << endl;
		iter++;
	}

	while (abs(xn - x1) > eps);
	cout << "Корень уравнения: " << xn << endl;
	
	cout << "Количество итераций: " << iter << endl;
	
}

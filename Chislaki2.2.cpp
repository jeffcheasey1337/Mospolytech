#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

double func(double x,double exp= 2.71828)
{
	return x*pow(exp,x)-1;
}

double new_x(double a, double b)
{
	return a - (b - a) / (func(b) - func(a)) * func(a);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, x0, x1, eps;
	int it = 1;
	cout << "Метод хорд для функции y = x*e^(x)-1" << endl;
	cout << endl;
	cout << "Введит концы отрезка:" << endl;
	cin >> a >> b;
	cout << "Введите точность:" << endl;
	cin >> eps;
	do
	{
		x0 = new_x(a, b);
		if (func(b) * func(x0) < 0)
		{
			a = x0;
		}
		else
		{
			b = x0;
		}
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
		x1 = new_x(a, b);
		

		it++;
	} while (abs(x1 - x0) > eps);
	cout << "Корень уравнения: " << x1 << endl;
	cout << "Точность: " << eps << endl;
	cout << "Количество итераций: " << it << endl;
	
}


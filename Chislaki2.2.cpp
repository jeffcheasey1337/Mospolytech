#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

double fu(double x, double exp = 2.71828)
{
	return x * (pow(exp, x)) - 1;
}
double nx(double a, double b)
{
	return a - ((b - a) / (fu(b) - fu(a))) * fu(a);
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
		x1 = nx(a, b);
		if (fu(b) * fu(x0) < 0)
		{
			a = x1;
		}
		else
		{
			b = x1;
		}
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
		x1 = nx(a, b);


		it++;
	} while ((fu(x1 - eps) * fu(x1 + eps))>0);
	cout << "Корень уравнения: " << x1 << endl;
	cout << "Количество итераций: " << it << endl;

}

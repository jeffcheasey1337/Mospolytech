#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL, "RUS");
double a, b, c = 0, eps,exp=2.71828;
int it = 0;
cout << "Метод дихотомии для функции y = x*e^(x)-1" << endl;
cout << endl;
cout << "Введит концы отрезка:" << endl;
cin >> a >> b;
cout << "Введите точность:" << endl;
cin >> eps;
while (abs(b - a) > eps)
{
	c = (a + b) / 2;
	if ((b*pow(exp,b)-1) * (c * pow(exp, c) - 1) < 0)
	{
		a = c;
	}
	else
	{
		b = c;
	}
	it++;
}
c = (a + b) / 2;
cout << "Корень уравнения: " << c << endl;
cout << "Точность: " << eps << endl;
cout << "Количество итераций: " << it << endl;
}

#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL, "RUS");
double a, b, с = 0, eps,exp=2.71828;
int it = 0;
cout << "Метод дихотомии для функции y = x*e^(x)-1" << endl;
cout << endl;
cout << "Введит концы отрезка:" << endl;
cin >> a >> b;
cout << "Введите точность:" << endl;
cin >> eps;
while (abs(b - a) > eps)
{
	с = (a + b) / 2;
	if ((b*pow(exp,b)-1) * (с * pow(exp, с) - 1) < 0)
	{
		a = с;
	}
	else
	{
		b = с;
	}
	it++;
}
с = (a + b) / 2;
cout << "Корень уравнения: " << с << endl;
cout << "Точность: " << eps << endl;
cout << "Количество итераций: " << it << endl;
}
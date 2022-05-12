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
	cout << "����� ���� ��� ������� y = x*e^(x)-1" << endl;
	cout << endl;
	cout << "������ ����� �������:" << endl;
	cin >> a >> b;
	cout << "������� ��������:" << endl;
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
		x1 = new_x(a, b);
		it++;
	} while (abs(x1 - x0) > eps);
	cout << "������ ���������: " << x1 << endl;
	cout << "��������: " << eps << endl;
	cout << "���������� ��������: " << it << endl;
	
}

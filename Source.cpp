#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL, "RUS");
double a, b, � = 0, eps,exp=2.71828;
int it = 0;
cout << "����� ��������� ��� ������� y = x*e^(x)-1" << endl;
cout << endl;
cout << "������ ����� �������:" << endl;
cin >> a >> b;
cout << "������� ��������:" << endl;
cin >> eps;
while (abs(b - a) > eps)
{
	� = (a + b) / 2;
	if ((b*pow(exp,b)-1) * (� * pow(exp, �) - 1) < 0)
	{
		a = �;
	}
	else
	{
		b = �;
	}
	it++;
}
� = (a + b) / 2;
cout << "������ ���������: " << � << endl;
cout << "��������: " << eps << endl;
cout << "���������� ��������: " << it << endl;
}
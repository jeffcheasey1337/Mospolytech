#include<iostream>
using namespace std;
int pynkt, n, s;
double a, i;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Выберите пункт:\n" <<
		"1.Цена конфет\n" <<
		"2.Произведение множителей\n" <<
		"3.Квадрат числа\n" <<
		"4.Сумма\n" <<
		"5.Значение выражения\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "Введите цену одного кило конфет: "; cin >> n;
		for (i = 0.1; i < 0.9; i += 0.1)
		{
			a = n * i;
			cout << "Цена " << i << " кило " << a << endl;
		}
		break;

	case 2:
		cout << "Введите число: "; cin >> n;
		a = 1.1;
		for (i = 1.2; i <= n + 0.1; i += 0.1)
		{
			a = a * i;
		}
		cout << "Произведение " << a << endl;
		break;

	case 3:
		cout << "Введите число: "; cin >> n;
		for (int j = 1; j <= 2 * n - 1; j += 2)
		{
			s += j;
			cout << "Сумма чисел составляет " << s << endl;
		}
		cout << "\n" << "Квадрат числа " << n << " равен " << s << endl;
		break;

	case 4:
		cout << "Введите число a="; cin >> a;
		cout << "Введите число n="; cin >> n;
		for (int j = 0; j <= n; j++)
		{
			s += pow(a, j);
		}
		cout << s;
		break;

	case 5:
		cout << "Введите число a="; cin >> a;
		cout << "Введите число n="; cin >> n;
		for (int j = 0; j <= n; j++)
		{
			s += pow(-a, j);
		}
		cout << s << endl;
		break;

	default:
		break;
	}
}
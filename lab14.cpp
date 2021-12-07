#include<iostream>
using namespace std;
int pynkt, a, b, c, n, k, s, i;
double s1 = 1000, s2 = 1000, x;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Выберите пункт:\n" <<
		"1.Целые числа\n" <<
		"2.Длинна незанятой части\n" <<
		"3.N и K\n" <<
		"4.Вклад в банке\n" <<
		"5.Наибольший общий делитель\n" <<
		"6.Число Фибоначчи\n"; cin >> pynkt;
	switch (pynkt)
	{
	case 1:
		cout << "Введите a="; cin >> a;
		cout << "Введите b="; cin >> b;
		for (int i = a; i <= b; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i;
			}
		}
		break;

	case 2:
		cout << "Введите a="; cin >> a;
		cout << "Введите b="; cin >> b;
		n = 0;
		if (b > a / 2)
		{
			cout << "Длинна незанятой части А равна " << a - b << endl;
		}
		else {
			while (n < a)
			{
				n += b;
			}
			if (n == a)
			{
				cout << "Длинна незанятой части А равна " << 0 << endl;
			}
			else {
				n -= b;
				cout << "Длинна незанятой части А равна " << a - n << endl;
			}
		}
		break;

	case 3:
		cout << "Введите число: "; cin >> n;
		s = 0;
		for (i = 1; n >= s; i)
		{
			s += i;
			i += 2;
		}
		cout << "K=" << i - 2 << endl;
		cout << "Sum=" << s << endl;
		break;

	case 4:
		int p;
		i = 1;
		cout << "Введите процент: \n"; cin >> p;
		x = 1 + 0.01 * p;
		for (s1, i; s2 < 1100; i++)
		{
			s2 = s1 * pow(x, i);
		}
		cout << "После " << i - 1 << " месяцев, сумма депозита будет " << s2 << endl;
		break;

	case 5:
		cout << "Введите два числа:\n" <<
			"A="; cin >> a;
		cout << "B="; cin >> b;
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		cout << "Наибольший общий делитель равен " << a << endl;
		break;

	case 6:
		cout << "Введите число: \n"; cin >> n;
		a = 0;
		b = 1;
		for (i = 2; a + b < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		if ((a + b) == n)
		{
			cout << n << " это число Фибонааччи, его порядковый номер " << i << endl;
		}
		else {
			cout << n << " не число Фибонааччи" << endl;
		}
		break;

	default:
		break;
	}
}
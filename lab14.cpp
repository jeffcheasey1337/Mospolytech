#include<iostream>
using namespace std;
int pynkt, a, b, c, n, k, s, i;
double s1 = 1000, s2 = 1000, x;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "�������� �����:\n" <<
		"1.����� �����\n" <<
		"2.������ ��������� �����\n" <<
		"3.N � K\n" <<
		"4.����� � �����\n" <<
		"5.���������� ����� ��������\n" <<
		"6.����� ���������\n"; cin >> pynkt;
	switch (pynkt)
	{
	case 1:
		cout << "������� a="; cin >> a;
		cout << "������� b="; cin >> b;
		for (int i = a; i <= b; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i;
			}
		}
		break;

	case 2:
		cout << "������� a="; cin >> a;
		cout << "������� b="; cin >> b;
		n = 0;
		if (b > a / 2)
		{
			cout << "������ ��������� ����� � ����� " << a - b << endl;
		}
		else {
			while (n < a)
			{
				n += b;
			}
			if (n == a)
			{
				cout << "������ ��������� ����� � ����� " << 0 << endl;
			}
			else {
				n -= b;
				cout << "������ ��������� ����� � ����� " << a - n << endl;
			}
		}
		break;

	case 3:
		cout << "������� �����: "; cin >> n;
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
		cout << "������� �������: \n"; cin >> p;
		x = 1 + 0.01 * p;
		for (s1, i; s2 < 1100; i++)
		{
			s2 = s1 * pow(x, i);
		}
		cout << "����� " << i - 1 << " �������, ����� �������� ����� " << s2 << endl;
		break;

	case 5:
		cout << "������� ��� �����:\n" <<
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
		cout << "���������� ����� �������� ����� " << a << endl;
		break;

	case 6:
		cout << "������� �����: \n"; cin >> n;
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
			cout << n << " ��� ����� ����������, ��� ���������� ����� " << i << endl;
		}
		else {
			cout << n << " �� ����� ����������" << endl;
		}
		break;

	default:
		break;
	}
}
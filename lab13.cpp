#include<iostream>
using namespace std;
int pynkt, n, s;
double a, i;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "�������� �����:\n" <<
		"1.���� ������\n" <<
		"2.������������ ����������\n" <<
		"3.������� �����\n" <<
		"4.�����\n" <<
		"5.�������� ���������\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "������� ���� ������ ���� ������: "; cin >> n;
		for (i = 0.1; i < 0.9; i += 0.1)
		{
			a = n * i;
			cout << "���� " << i << " ���� " << a << endl;
		}
		break;

	case 2:
		cout << "������� �����: "; cin >> n;
		a = 1.1;
		for (i = 1.2; i <= n + 0.1; i += 0.1)
		{
			a = a * i;
		}
		cout << "������������ " << a << endl;
		break;

	case 3:
		cout << "������� �����: "; cin >> n;
		for (int j = 1; j <= 2 * n - 1; j += 2)
		{
			s += j;
			cout << "����� ����� ���������� " << s << endl;
		}
		cout << "\n" << "������� ����� " << n << " ����� " << s << endl;
		break;

	case 4:
		cout << "������� ����� a="; cin >> a;
		cout << "������� ����� n="; cin >> n;
		for (int j = 0; j <= n; j++)
		{
			s += pow(a, j);
		}
		cout << s;
		break;

	case 5:
		cout << "������� ����� a="; cin >> a;
		cout << "������� ����� n="; cin >> n;
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
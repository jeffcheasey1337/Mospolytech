#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, min, mnozh;
	double chast;
	cout << "������� ������ ����� \n";
	cin >> a;
	cout << "������� ������ ����� \n";
	cin >> b;
	sum = abs(a) + abs(b);
	min = abs(a) - abs(b);
	mnozh = abs(a) * abs(b);
	chast = (double)abs(a) / abs(b);
	cout << "�����:" << sum << "\n" << "��������:" << min << "\n" << " ������������:" << mnozh << "\n" << "�������: " << chast << "\n";
}
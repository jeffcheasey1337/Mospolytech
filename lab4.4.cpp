#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, min, mnozh;
	double chast;
	cout << "������� ������ ����� \n";
	cin >> a ;
	cout << "������� ������ ����� \n";
	cin >> b;
	sum = pow(a, 2) + pow(b, 2);
	min = pow(a, 2) - pow(b, 2);
	mnozh = pow(a, 2) * pow(b, 2);
	chast = (double)pow(a, 2) / pow(b, 2);
	cout << "�����:" << sum << "\n" << "��������: " << min << "\n" << "���������: " << mnozh << "\n" << "�������: " << chast << "\n";
}
#include<iostream>
using namespace std;
int x1, x2, y, y2, x3, y3, a, b,k;
double d, d1, d2, D, P, S;
int xA = 4, yA = -6, xB = -3, yB = -2, xC = -2, yC = -6;



int main()
{
	int p;
	setlocale(LC_ALL, "rus");

	cout << " �������� �����  \n" <<
		"1. ������� 1 \n" <<
		"2. ������� 2 \n" <<
		"3. ������� 3\n" <<
		"4. ������� 4 \n" <<
		"5. ������� 5 \n";
	cin >> p;

	switch (p)
	{
	case 1:
		cout << " ������� ���������� ������ ����� \n";
		cin >> x1 >> y;
		cout << "������� ���������� ������ ����� \n";
		cin >> x2 >> y2;
		d = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2));
		cout << "���������� ����� ������� ����� " << d;
		break;

	case 2:
		cout << "������� ���������� ����� A:\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� B:\n";
		cin >> x2 >> y2;
		cout << "������� ���������� ����� C:\n";
		cin >> x3 >> y3;
		d1 = sqrt(pow(x1 - x3, 2) + pow(y - y3, 2));
		d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		D = d2 + d1;
		cout << "���������� ����� ������� A � C ����� " << d1 << "\n";
		cout << "���������� ����� ������� B � C ����� " << d2 << "\n";
		cout << "����� ���� �������� AC � BC ����� " << D << "\n";
		break;

	case 3:
		cout << "�� ������������ ����� " << sqrt(pow(xA - xC, 2) + pow(yA - yC, 2)) * sqrt(pow(xB - xC, 2) + pow(yB - yC, 2)) << "\n";
		break;

	case 4:
		cout << "������� ���������� ����� 1 :\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� 2 :\n";
		cin >> x2 >> y2;
		cout << "�������� �������������� ����� " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";
		cout << "������� �������������� ����� " << abs(x2 - x1) * abs(y - y2) << "\n";
		break;

	case 5:
		cout << "������� ���������� ����� A:\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� B :\n";
		cin >> x2 >> y2;
		cout << "������� ���������� ����� C :\n";
		cin >> x3 >> y3;
		P = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) + sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2));
		S = sqrt(P / 2 * (P - sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) * (P / 2 - sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) * (P / 2 - sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2))))));
		cout << "�������� ������������ ����� " << P << "\n";
		cout << "������� ������������ ����� " << S << "\n";
		break;
		{default: cout << "������ ������ ���" << k;

			break; }
	
	}

}
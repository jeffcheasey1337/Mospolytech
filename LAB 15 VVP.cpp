#include <iostream>

using namespace std;
int A, B;
const int S = 5;



int PowerA3(int b)
{
	return b = pow(b, 3);
}

int SignX(int x)
{
	if (x < 0)
	{
		return x = -1;
	}
	if (x == 0)
	{
		return x = 0;
	}
	if (x > 0)
	{
		return x = 1;
	}
}

double RingS(int r1, int r2)
{
	const double pi = 3.14;
	return pi * (pow(r1, 2) - pow(r2, 2));
}

int Quarter(int x, int y)
{
	int c;
	if (x > 0 && y > 0)
	{
		return c = 1;
	}
	if (x > 0 && y < 0)
	{
		return c = 4;
	}
	if (x < 0 && y < 0)
	{
		return c = 3;
	}
	if (x < 0 && y>0)
	{
		return c = 2;
	}
}

int Fact2(int n)
{
	int c = 1;

	if (n % 2 > 0)
	{

		for (int i = 3; i <= n; i += 2)
		{
			c = c * i;
		}

		return c;
	}
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2)
		{
			c = c * i;
		}
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int pynkt;

	cout << "�������� �����:\n" <<
		"1.������� Power\n" <<
		"2.������� Sign\n" <<
		"3.������� RingS\n" <<
		"4.������� Quarter\n" <<
		"5.������� Fact2\n" << endl; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "������� �����:\n";

		for (int  i = 0; i < 5; i++)
		{
			cin >> A;

			cout << "������ ������� ����� " << A << " ����� " << PowerA3(A) << endl;
			

		}

		break;

	case 2:
		int X;
		cout << "������� X "; cin >> X;
		cout << " ��� X ������ ����� " << SignX(X) << endl;

		cout << "������� ��� ����� A � B:\n"; cin >> A >> B;
		cout << "������� SignX(A) + SignX(B) ����� " << SignX(A) + SignX(B) << endl;
		break;

	case 3:
		int a[S];	
		int r1, r2;
		cout << "������� ������:\n\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "������� ������: "; cin >> r1;
			cout << "����� ������: "; cin >> r2;
			cout << "\n";
			cout << "������� ������ ����� " << RingS(r1, r2) << endl;
			

		}

		break;

	case 4:
		int n, k;
		

		for (int  i = 0; i < 3; i++)
		{
			cout << "������� ���������� X: "; cin >> n;
			cout << "������� ���������� Y: "; cin >> k;
			cout << "\n";
			switch (Quarter(n, k))
			{
			case 1:
				cout << "����� � ������ ������������ �������� \n\n";
				break;

			case 2:
				cout << "����� �� ������ ������������ �������� \n\n";
				break;

			case 3:
				cout << "����� � ������� ������������ ��������\n\n";
				break;

			case 4:
				cout << "����� � ��������� ������������ ��������\n\n";
				break;
			}
		}

		
		break;

	case 5:
		int N;
		cout << "������� ����� \nN="; cin >> N;

		if (N % 2 > 0)
		{
			cout << "����� ��������, ��� ��������, ��� ��� ��������� ����� " << Fact2(N) << endl;
		}
		else
		{
			cout << "����� ������, ��� ��������, ��� ��� ��������� ����� " << Fact2(N) << endl;
		}

		break;

	default:
		break;
	}
}
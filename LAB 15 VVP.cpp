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

	cout << "Выберите пункт:\n" <<
		"1.Функция Power\n" <<
		"2.Функиця Sign\n" <<
		"3.Функция RingS\n" <<
		"4.Функция Quarter\n" <<
		"5.Функция Fact2\n" << endl; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "Введите число:\n";

		for (int  i = 0; i < 5; i++)
		{
			cin >> A;

			cout << "Третья степень числа " << A << " равно " << PowerA3(A) << endl;
			

		}

		break;

	case 2:
		int X;
		cout << "Введите X "; cin >> X;
		cout << " Для X функия равна " << SignX(X) << endl;

		cout << "Введите два числа A и B:\n"; cin >> A >> B;
		cout << "Функции SignX(A) + SignX(B) равны " << SignX(A) + SignX(B) << endl;
		break;

	case 3:
		int a[S];	
		int r1, r2;
		cout << "Введите радиус:\n\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "Большой радиус: "; cin >> r1;
			cout << "Малый радиус: "; cin >> r2;
			cout << "\n";
			cout << "Площадь кольца равна " << RingS(r1, r2) << endl;
			

		}

		break;

	case 4:
		int n, k;
		

		for (int  i = 0; i < 3; i++)
		{
			cout << "Введите координаты X: "; cin >> n;
			cout << "Введите координаты Y: "; cin >> k;
			cout << "\n";
			switch (Quarter(n, k))
			{
			case 1:
				cout << "Точка в первой координатной четверти \n\n";
				break;

			case 2:
				cout << "Точка во второй координатной четверти \n\n";
				break;

			case 3:
				cout << "Точка в третьей координатной четверти\n\n";
				break;

			case 4:
				cout << "Точка в четвертой координатной четверти\n\n";
				break;
			}
		}

		
		break;

	case 5:
		int N;
		cout << "Введите число \nN="; cin >> N;

		if (N % 2 > 0)
		{
			cout << "Число нечетное, что означает, что его факториал равен " << Fact2(N) << endl;
		}
		else
		{
			cout << "Число четное, что означает, что его факториал равен " << Fact2(N) << endl;
		}

		break;

	default:
		break;
	}
}
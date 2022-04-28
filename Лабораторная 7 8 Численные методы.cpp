#include<iostream>
using namespace std;
double a, b, s, dlin, h, granic,h1;
int n, p;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Выберите пункт: \n" <<
		"1.Метод прямоугольника\n" <<
		"2.Метод трапеции\n";
		
	cin >> p;

	switch (p)
	{

	case 1:
		s = 0;


		a = 1;
		b = 10;
		cout << "\nВведите колличество шагов = ";
		cin >> n;
		dlin = (b - a) / n;
		granic = a + dlin / 2;

		for (int i = 1; i <= n; i++)
		{
			h = pow(granic, 3) / (4 * pow(granic, 4) + 10);

			s = s + (h * dlin);
			granic = granic + dlin;


		}
		cout << "Площадь под функцией:" << s << endl;
		break;

	case 2:
		s = 0;


		a = 1;
		b = 10;
		cout << "\nВведите колличество шагов = ";
		cin >> n;
		dlin = (b - a) / n;
		granic = a;

		for (int i = 1; i <= n; i++)
		{
			h = pow(granic, 3) / (4 * pow(granic, 4) + 10);
			h1=pow(granic+dlin,3)/ (4 * pow(granic+dlin, 4) + 10);

			s =s+ ((h1+h)/2)*dlin;
			granic = granic + dlin;


		}
		cout << "Площадь под функцией:" << s << endl;
		break;

	

	default:
		break;
	}

}
#include<iostream>
using namespace std;
double a, b, s, dlin, h, granic, h1, h2, granic2, granic3;
int n, p;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Выберите пункт: \n" <<
		"1.Метод прямоугольника\n" <<
		"2.Методттрапеций\n" <<
		"3.Метод Симпсона\n";

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
			h1 = pow(granic + dlin, 3) / (4 * pow(granic + dlin, 4) + 10);

			s = s + ((h1 + h) / 2) * dlin;
			granic = granic + dlin;


		}
		cout << "Площадь под функцией:" << s << endl;
		break;
	case 3:
		s = 0;


		a = 1;
		b = 10;
		cout << "\nВведите колличество шагов = ";
		cin >> n;
		dlin = (b - a) / n;
		granic = a;
		granic2 = a + dlin;
		granic3 = a + dlin + dlin;

		for (int i = 1; i <= n; i+=2)
		{
			h = pow(granic, 3) / (4 * pow(granic, 4) + 10);
			h1 = pow(granic2, 3) / (4 * pow(granic2, 4) + 10);
			h2 = pow(granic3, 3) / (4 * pow(granic3, 4) + 10);

			s = s + ((dlin / 3) * (h + 4 * h1 + h2));
			granic = granic+(dlin*2);
			granic2 = granic2+(dlin * 2);
			granic3 = granic3+(dlin * 2);



		}
		cout << "Площадь под функцией:" << s << endl;
		break;



	default:
		break;
	}

}
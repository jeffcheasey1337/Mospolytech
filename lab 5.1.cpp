#include<iostream>
using namespace std;
int x1, x2, y, y2, x3, y3, a, b,k;
double d, d1, d2, D, P, S;
int xA = 4, yA = -6, xB = -3, yB = -2, xC = -2, yC = -6;



int main()
{
	int p;
	setlocale(LC_ALL, "rus");

	cout << " Выберите пункт  \n" <<
		"1. Задание 1 \n" <<
		"2. Задание 2 \n" <<
		"3. Задание 3\n" <<
		"4. Задание 4 \n" <<
		"5. Задание 5 \n";
	cin >> p;

	switch (p)
	{
	case 1:
		cout << " Введите координаты первой точки \n";
		cin >> x1 >> y;
		cout << "Введите координаты второй точки \n";
		cin >> x2 >> y2;
		d = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2));
		cout << "Расстояние между точками равно " << d;
		break;

	case 2:
		cout << "Введите координаты точки A:\n";
		cin >> x1 >> y;
		cout << "Введите координаты точки B:\n";
		cin >> x2 >> y2;
		cout << "Введите координаты точки C:\n";
		cin >> x3 >> y3;
		d1 = sqrt(pow(x1 - x3, 2) + pow(y - y3, 2));
		d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		D = d2 + d1;
		cout << "Расстояние между точками A и C равно " << d1 << "\n";
		cout << "Расстояние между точками B и C равно " << d2 << "\n";
		cout << "Сумма длин отрезков AC и BC равно " << D << "\n";
		break;

	case 3:
		cout << "Их произведение равно " << sqrt(pow(xA - xC, 2) + pow(yA - yC, 2)) * sqrt(pow(xB - xC, 2) + pow(yB - yC, 2)) << "\n";
		break;

	case 4:
		cout << "Введите координаты точки 1 :\n";
		cin >> x1 >> y;
		cout << "Введите координаты точки 2 :\n";
		cin >> x2 >> y2;
		cout << "Периметр прямоугольника равен " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";
		cout << "Площадь прямоугольника равна " << abs(x2 - x1) * abs(y - y2) << "\n";
		break;

	case 5:
		cout << "Введите координаты точки A:\n";
		cin >> x1 >> y;
		cout << "Введите координаты точки B :\n";
		cin >> x2 >> y2;
		cout << "Введите координаты точки C :\n";
		cin >> x3 >> y3;
		P = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) + sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2));
		S = sqrt(P / 2 * (P - sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) * (P / 2 - sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) * (P / 2 - sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2))))));
		cout << "Периметр треугольника равен " << P << "\n";
		cout << "Площадь треугольника равна " << S << "\n";
		break;
		{default: cout << "Такого номера нет" << k;

			break; }
	
	}

}
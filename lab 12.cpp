#include<iostream>
using namespace std;
int n;

int main()
{
	setlocale(LC_ALL, "ru");
	int pynkt;
	cout << "Выберите пункт:\n" <<
		"1.День и месяц\n" <<
		"2.Робот\n" <<
		"3.Строка-описание количества заданий\n" <<
		"4.Строка описания чисел от 100 до 999\n" <<
		"5.Восточный календарь.\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		int d, m;
		cout << "Номер месяца "; cin >> m; cout << "Номер дня "; cin >> d;
		if (m == 2 && d > 29)
		{
			cout << "В феврале нет чисел больше 29.";
			break;
		}
		else
		{
			if (m == 2 && d == 29)
			{
				cout << "Иногда может быть двадцать девятое февраля.";
				break;
			}
			else
			{
				switch (d)
				{
				case 10:
					cout << "Десятое ";
					break;

				case 11:
					cout << "Одиннацатое ";
					break;

				case 12:
					cout << "Двенадцатое ";
					break;

				case 13:
					cout << "Тринадцатое ";
					break;

				case 14:
					cout << "Четырнадцатое ";
					break;

				case 15:
					cout << "Пятнадцатое ";
					break;

				case 16:
					cout << "Шестнадцатое ";
					break;

				case 17:
					cout << "Семнадацтое ";
					break;

				case 18:
					cout << "Восемнадацтое";
					break;

				case 19:
					cout << "Девятнадцатое ";
					break;

				case 20:
					cout << "Двадцатое ";
					break;

				case 30:
					cout << "Тридцатое ";
					break;

				default:
					if (d < 10)
					{
						cout << "";
						switch (d % 10)
						{
						case 1:
							cout << " Первое ";
							break;

						case 2:
							cout << " Второе ";
							break;

						case 3:
							cout << " Третье ";
							break;

						case 4:
							cout << " Четвертое ";
							break;

						case 5:
							cout << " Пятое ";
							break;

						case 6:
							cout << " Шестое ";
							break;

						case 7:
							cout << " Седьмое ";
							break;

						case 8:
							cout << " Восьмое ";
							break;

						case 9:
							cout << " Девятое ";
							break;
						}
						break;
					}
					else
					{
						switch (d / 10)
						{
						case 2:
							cout << "Двадцатое";
							break;

						case 3:
							cout << "Тридцатое";
							break;
						}
						switch (d % 10)
						{
						case 1:
							cout << " Первое ";
							break;

						case 2:
							cout << " Второе ";
							break;

						case 3:
							cout << " Третье ";
							break;

						case 4:
							cout << " Четвертое ";
							break;

						case 5:
							cout << " Пятое ";
							break;

						case 6:
							cout << " Шестое ";
							break;

						case 7:
							cout << " Седьмое ";
							break;

						case 8:
							cout << " Восьмое ";
							break;

						case 9:
							cout << " Девятое ";
							break;
						}
						break;
					}
				}

				switch (m)
				{
				case 1:
					cout << " Январь ";
					break;

				case 2:
					cout << " Февраль ";
					break;

				case 3:
					cout << " Март ";
					break;

				case 4:
					cout << " Апрель ";
					break;

				case 5:
					cout << " Май ";
					break;

				case 6:
					cout << " Июнь ";
					break;

				case 7:
					cout << " Июль ";
					break;

				case 8:
					cout << " Август ";
					break;

				case 9:
					cout << " Сентябрь ";
					break;

				case 10:
					cout << " Октябрь ";
					break;

				case 11:
					cout << " Ноябрь ";
					break;

				case 12:
					cout << " Декабрь ";
					break;
				}
				break;
			}
		}


	case 2:
		char a;
		cout << "Робот может ходить в двух направлениях:\nS--Юг\nN--Север\nW--Запад\nE--Восток\n\n" <<
			"Есть три команды:\n0--продолжать идти;\n1--поворот на лево;\n-1--поворот на право;\n";
		cout << "Выберите направление: "; cin >> a;
		switch (a)
		{
		case 'S':
			cout << "Робот двигается на Юг \n";
			break;
		case 'N':
			cout << "Робот двигаеться на Север \n";
			break;
		case 'W':
			cout << "Робот двигаеться на Запад \n";
			break;
		case 'E':
			cout << "Робот двигаеться на Восток \n";
			break;
		default:
			break;
		}
		cout << "Выберите одну из команд: "; cin >> n;

		switch (a)
		{
		case 'S':
			switch (n)
			{
			case 0:
				cout << "Робот все еще идет на Юг\n\n";
				break;
			case 1:
				cout << "Робот поворачивает на лево и идет на Восток\n\n";
				break;
			case -1:
				cout << "Робот поворачивает на право и идет на Запад\n\n";
				break;
			default:
				break;
			}
			break;
		case 'N':
			switch (n)
			{
			case 0:
				cout << "Робот все еще идет на Север\n\n";
				break;
			case 1:
				cout << "Робот поворачивает на лево и идет на Запад\n\n";
				break;
			case -1:
				cout << "Робот поворачивает на право и идет на Восток\n\n";
				break;
			default:
				break;
			}
			break;
		case 'W':
			switch (n)
			{
			case 0:
				cout << "Робот все еще идет на Запад\n\n";
				break;
			case 1:
				cout << "Робот поворачивает на лево и идет на Юг\n\n";
				break;
			case -1:
				cout << "Робот поворачивает на право и идет на Север\n\n";
				break;
			default:
				break;
			}
			break;
		case 'E':
			switch (n)
			{
			case 0:
				cout << "Робот все еще идет на Восток\n\n";
				break;
			case 1:
				cout << "Робот поворачивает на лево и идет на Север\n\n";
				break;
			case -1:
				cout << "Робот поворачивает на право и идет на Юг\n\n";
				break;
			default:
				break;
			}
			break;

		default:
			break;
		}
		break;


	case 3:
		int k;
		cout << "Введите число между 10 и 40: "; cin >> k;
		switch (k)
		{
		case 10:
			cout << "Десять ";
			break;

		case 11:
			cout << "одиннадцать ";
			break;

		case 12:
			cout << "двенадцать ";
			break;

		case 13:
			cout << "тринадцать ";
			break;

		case 14:
			cout << "четырнадцать ";
			break;

		case 15:
			cout << "пятнадцать ";
			break;

		case 16:
			cout << "шестнадцать ";
			break;

		case 17:
			cout << "семнадцать ";
			break;

		case 18:
			cout << "восемнадцать ";
			break;

		case 19:
			cout << "девятнадцать ";
			break;

		case 20:
			cout << "двадцать ";
			break;

		case 30:
			cout << "тридцать ";
			break;

		case 40:
			cout << "сорок ";
			break;
		default:
			switch (k / 10)
			{
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			}
			switch (k % 10)
			{
			case 1:
				cout << "один ";
				break;
			case 2:
				cout << "два ";
				break;
			case 3:
				cout << "три ";
				break;
			case 4:
				cout << "четыре ";
				break;
			case 5:
				cout << "пятть ";
				break;
			case 6:
				cout << "шесть ";
				break;
			case 7:
				cout << "семь ";
				break;
			case 8:
				cout << "восемь ";
				break;
			case 9:
				cout << "девять ";
				break;
			}
			break;
		}
		cout << "Заданий" << endl;
		break;

	case 4:
		int l;
		cout << "Введите число между 100 и 999: "; cin >> l;
		switch (l / 100)
		{
		case 1:
			cout << "сто ";
			break;
		case 2:
			cout << "двести ";
			break;
		case 3:
			cout << "триста ";
			break;
		case 4:
			cout << "четыреста ";
			break;
		case 5:
			cout << "пятьсот ";
			break;
		case 6:
			cout << "шестьсот ";
			break;
		case 7:
			cout << "семьсот ";
			break;
		case 8:
			cout << "восемьсот ";
			break;
		case 9:
			cout << "девятьсот ";
			break;
		}
		switch (l / 10 % 10)
		{
		case 0:
			cout << "";
			break;
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шесдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}
		switch (l % 100)
		{
		case 10:
			cout << "десять";
			break;
		case 11:
			cout << "одиннадцать";
			break;
		case 12:
			cout << "двенадцать";
			break;
		case 13:
			cout << "тринадцать";
			break;
		case 14:
			cout << "четырнадцать";
			break;
		case 15:
			cout << "пятнадцать";
			break;
		case 16:
			cout << "шестнадцать";
			break;
		case 17:
			cout << "семнадцать";
			break;
		case 18:
			cout << "восемнадцать";
			break;
		case 19:
			cout << "девятнадцать";
			break;
		default:
			switch (l % 10)
			{
			case 0:
				cout << "";
				break;
			case 1:
				cout << "один";
				break;
			case 2:
				cout << "два";
				break;
			case 3:
				cout << "три";
				break;
			case 4:
				cout << "четыре";
				break;
			case 5:
				cout << "пять";
				break;
			case 6:
				cout << "шесть";
				break;
			case 7:
				cout << "семь";
				break;
			case 8:
				cout << "восемь";
				break;
			case 9:
				cout << "девять";
				break;
			}
			break;
		}
		break;

	case 5:
		int y;
		cout << "Введите год: "; cin >> y;
		cout << y << " это год ";
		y -= 3;
		switch (y % 60 / 12)
		{
		case 0:
			cout << "зеленый(ого/ой)";
			break;
		case 1:
			cout << "красный(ого/ой)";
			break;
		case 2:
			cout << "желтый(ого/ой)";
			break;
		case 3:
			cout << "белый(ого/ой)";
			break;
		case 4:
			cout << "черный(ого/ой)";
			break;
		}
		switch (y % 12)
		{
		case 0:
			cout << " свиньи:";
			break;
		case 1:
			cout << " крысы ";
			break;
		case 2:
			cout << " коровы ";
			break;
		case 3:
			cout << " тигра ";
			break;
		case 4:
			cout << " зайца ";
			break;
		case 5:
			cout << " дракона ";
			break;
		case 6:
			cout << " змеии";
			break;
		case 7:
			cout << " лошади ";
			break;
		case 8:
			cout << " овцы ";
			break;
		case 9:
			cout << " обезьяны ";
			break;
		case 10:
			cout << " курицы ";
			break;
		case 11:
			cout << " собаки ";
			break;
		}
		break;


	}
}
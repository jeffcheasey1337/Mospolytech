#include<iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>


using namespace std;
int pynkt, y5 = 39, x5 = 1, j5, d5, j6, ch6,j7,funt81,funt82,funt83,shill81,shill82,shill83,pens81,pens82,pens83,guest9,place9,var9,variant9=1,j9,st11,sh11,pn11,op11,sum111,sum112,sum113;
long f6 = 1;
double v7, l7, pr7, s7, sum7,vklad10,zhel10,proz10,s10,sum10,let10=0;
char ch8,ch11,div11;

int vyrozhenye1(int st11, int sh11, int pn11)
{
	return (st11 * 240 + sh11 * 12 + pn11);
}
void vyrozhenye2(int sump11, int st11, int sh11, int pn11)
{
	st11 = sump11 / 240;
	sh11 = sump11 % 240 / 12;
	pn11 = sump11 % 240 % 12;
}


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Пункты:\n" <<
		"5.Пирамидка\n" <<
		"6.Факториал\n" <<
		"7.Вклад\n" <<
		"8.Ввод двух сумм \n" <<
		"9.Шесть гсотей \n" <<
		"10.Вр2 7 задачи\n" <<
		"11.Калькулятор англ.валюты\n" <<
		"12.Калькулятор дробей\n";
	cin >> pynkt;
	switch (pynkt)
	{
	case 5:
		do {
			j5 = y5;
			d5 = x5;
			do {
				cout << ' '; j5--;
			} while (j5 != 0);
			do {
				cout << 'X'; d5--;
			} while (d5 != 0);
			y5 -= 2;
			x5 += 2;
			cout << endl;
		} while (y5 > 0);
		break;
	case 6:
		do
		{
		f6 = 1;
		cout << "Введите целое число: ";
		cin >> j6;
		for (j6; j6 > 0; j6--)
			f6 *= j6;
		cout << "Факториал числа равен: " << f6 << endl;
		cout << "Вычислить факториал еще раз? (нет - 0, да - 1)" << endl;
		cin >> ch6;
		} while (ch6 != 0);
		break;
	case 7:
		cout << "Введите начальный вклад: ";
		cin >> v7;
		cout << " \nВведите число лет: ";
		cin >> l7;
		cout << "\nВведите процентную ставку: ";
		cin >> pr7;
		sum7 = v7;
		for (j7 = l7; j7 > 0; j7--)
		{
			s7 = sum7 / 100 * pr7;
			sum7 = s7 + sum7;
		}
		cout << "Через " << l7 << " лет вы получите " << sum7 << " долларов" << endl;
		break;
	case 8:
		do {
			cout << "Введите первую сумму: " << endl;
			cin >> funt82 >> shill82 >>pens82;
			cout << "Введите вторую сумму: " << endl;
			cin >> funt83 >> shill83 >>pens83;
			funt81 = funt82 + funt83;
			shill81 = shill82 + shill83;
			if (shill81 > 19)
			{
				funt81++;
				shill81 = shill81 - 20;
			}
			pens81 = pens82 + pens83;
			if (pens81 > 11)
			{
				shill81++;
				pens81 = pens81 - 12;
			}
			cout << "Всего: " << funt81 << " Фунтов\n" << shill81 << " Шиллингов\n" << pens81 << " Пенсов\n" << endl;
			cout << "Далее? (1/0)" << endl;
			cin >> ch8;
		} while (ch8 != '0');
		break;
	case 9:
		cout << "Кол-во гостей: ";
		cin >> guest9;
		cout << "\nКол-во мест: ";
		cin >> place9;
		var9 = guest9 - place9;
		for (j9 = guest9; j9 > var9; j9--)
			variant9 *= j9;
		cout << "Колличество вариантов: " << variant9 << endl;
		break;
	case 10:
		cout << "Введите начальный вклад: ";
		cin >> vklad10;
		cout << "Введите желаемую сумму: ";
		cin >> zhel10;
		cout << "Введите процентную ставку: ";
		cin >> proz10;
		sum10 = vklad10;
		do
		{
			s10 = sum10 / 100 * proz10;
			sum10 = s10 + sum10;
			let10++;
		} 
		while (sum10 <= zhel10);
		cout << "Через " << let10 << " лет вы получите желаемую сумму " << endl;
	case 11:
		cout << "Введите первую сумму: ";
		cin >> st11 >> sh11 >> pn11;
		sum112 = vyrozhenye1(st11, sh11, pn11);
		cout << "Введите операцию: ";
		cin >> ch11;
		cout << "Введите вторую сумму: ";
		if (ch11 == '*')
			cin >> op11;
		else
		{
			cin >> st11>> sh11 >> pn11;
			sum113 = vyrozhenye1(st11, sh11, pn11);
		}
		switch (ch11)
		{
		case '+': sum111 = sum112 + sum113; break;
		case '-': sum111 = abs(sum112 - sum113); break;
		case '*': sum111 = sum112 * op11;
		}
		vyrozhenye2(sum111, st11, sh11, pn11);
		cout << st11 << div11 << sh11 << div11 << pn11 << std::endl;
		
		
	default:

		break;
	}
}
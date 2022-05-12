#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL, "RUS");
double a, b, ñ = 0, eps,exp=2.71828;
int it = 0;
cout << "Ìåòîä äèõîòîìèè äëÿ ôóíêöèè y = x*e^(x)-1" << endl;
cout << endl;
cout << "Ââåäèò êîíöû îòðåçêà:" << endl;
cin >> a >> b;
cout << "Ââåäèòå òî÷íîñòü:" << endl;
cin >> eps;
while (abs(b - a) > eps)
{
	ñ = (a + b) / 2;
	if ((b*pow(exp,b)-1) * (ñ * pow(exp, ñ) - 1) < 0)
	{
		a = ñ;
	}
	else
	{
		b = ñ;
	}
	it++;
}
ñ = (a + b) / 2;
cout << "Êîðåíü óðàâíåíèÿ: " << ñ << endl;
cout << "Òî÷íîñòü: " << eps << endl;
cout << "Êîëè÷åñòâî èòåðàöèé: " << it << endl;
}

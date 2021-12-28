#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void randarr(int* arr, int n)
{
	setlocale(LC_ALL, "ru");
	arr[0] = rand() % 20;
	for (int i = 1; i < n; i++)
	{
		arr[i] = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
				arr[i] = rand() % 20;
			else
			{
				continue;
			}
		}

	}
	cout << "Массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void putarr(int* arr, int n)
{
	setlocale(LC_ALL, "ru");
	cout << "Введите значения массива:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void Random(int pynkt)
{
	setlocale(LC_ALL, "ru");
	int n;
	switch (pynkt)
	{
	case 1:
	{
		int k, l;
		cout << "Введите числа K и L (L>K):" << endl; cin >> k >> l;
		cout << "Введите размер массива (N>L):"; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int b = 0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\nСреднее арифметическое: " << (double)b / (l - k + 1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int d = arr[0] - arr[1];
		for (int i = 2; i < n; i++)
		{
			if (arr[i] - arr[i - 1] != d)
			{
				d = 0;
				break;
			}
			else
			{
				d = arr[i] - arr[i - 1];
			}
		}
		cout << endl;
		if (d == 0)
		{
			cout << 0 << "\nЭти числа не образуют арифметической прогрессию:" << endl;
		}
		else {
			cout << "Разница в арифметической прогрессии равна: " << d << endl;
		}
		delete[] arr;
		break;
	}
	case 3:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i += 2)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "Наименьший элемент с четным номером это " << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		for (int i = n - 2; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "Локальный максимум: " << arr[i] << endl;
				cout << "Это номер: " << i + 1 << "\t(если начать с 0, то его номер" << i << ")" << endl;
				break;
			}
			else
			{
				continue;
			}
		}
		delete[] arr;
		break;
	}

	case 5:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 15;
			cout << arr[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					c++;
					cout << "Два одинаковых элемента имеют значение: " << arr[i] << endl;
					cout << "Их номера " << j + 1 << " и " << i + 1 << " (Но если мы начнем с 0 их номера могут быть " << j << " и " << i << ")" << endl;
					break;
				}
			}
		}
		if (c == 0)
		{
			cout << "В массиве нет одинаковых номеров." << endl;
		}
		delete[] arr;
		break;
	}

	}

}

void Hands(int pynkt)
{
	setlocale(LC_ALL, "ru");
	int n;
	switch (pynkt)
	{
	case 1:
	{
		int k, l;
		cout << "Введите числа K и L (L>K):" << endl; cin >> k >> l;
		cout << "Введите размер массива (N> L):"; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int b = 0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\nСреднее арифметическое: " << (double)b / (l - k + 1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "Введите размер массива "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int d = arr[1] - arr[0];
		for (int i = 2; i < n; i++)
		{
			if (arr[i] - arr[i - 1] != d)
			{
				d = 0;
				break;
			}
			else
			{
				d = arr[i] - arr[i - 1];
			}
		}
		cout << endl;
		if (d == 0)
		{
			cout << 0 << "\nЭти числа не образуют арифметической прогрессии " << endl;
		}
		else {
			cout << "Разница в арифметической прогрессии равна " << d << endl;
		}
		break;
	}

	case 3:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i += 2)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "Наименьший элемент с четным номером это" << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		for (int i = n - 2; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "Локальный максимум: " << arr[i] << endl;
				cout << "Это номер: " << i + 1 << "\t(если начать с 0, то его номер " << i << ")" << endl;
				break;
			}
			else
			{
				continue;
			}
		}
		delete[] arr;
		break;
	}

	case 5:
	{
		cout << "Введите размер массива: "; cin >> n;
		int* arr = new int[n];
		int c = 0;
		putarr(arr, n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					c++;
					cout << "Два одинаковых элемента имеют значение: " << arr[i] << endl;
					cout << "Их номера " << j + 1 << " и " << i + 1 << " (Но если мы начнем с 0 их номера могут быть " << j << " и " << i << ")" << endl;
					break;
				}

			}
		}
		if (c == 0)
		{
			cout << "В массиве нет одинаковых номеров." << endl;
		}
		delete[] arr;
		break;
	}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(nullptr));
	string c;
	int pynkt;
	cout << "Выберите пункт:\n" <<
		"1. Среднее арефмитическое (K, L)\n" <<
		"2.Проверка Арефмитической прогресии\n" <<
		"3.Четные числа\n" <<
		"4.Локальный максимум\n" <<
		"5.Два одинаковых элемента" << endl; cin >> pynkt;
	cout << "Выберите способ заполнения массива:\nСлучайно\nРуками" << endl; cin >> c;

	if (c == "1")
		Random(pynkt);
	if (c == "2")
		Hands(pynkt);

}
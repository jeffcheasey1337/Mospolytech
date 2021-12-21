#include <iostream>

using namespace std;

void printArr(int* array, int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << endl;
}

void putArr(int* array, int n)
{
	cout << "Введите значение массива:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	int pynkt, n;
	cout << "Выберите пункт:\n" <<
		"1.Вывод массива.\n" <<
		"2.Геометрическая прогрессия.\n" <<
		"3.Массив А и В.\n" <<
		"4.Вывод обратного массива.\n" <<
		"5.Нечетное и четное.\n"; cin >> pynkt;
	cout << "\n\n";

	switch (pynkt)
	{
	case 1:
	{
		cout << "Введите число N:"; cin >> n;
		int* a = new int[n];
		int x = 1;

		for (int i = 0; i < n; i++)
		{
			a[i] = x;
			x += 2;
		}

		printArr(a, n);

		delete[] a;
	}
	break;

	case 2:
	{
		int A, D;
		cout << "Введите число N (N> 1):"; cin >> n;
		cout << "Введите первый член геометрической прогрессии A:"; cin >> A;
		cout << "Введите знаменатель геометрической прогрессии D:"; cin >> D;
		int* a = new int[n];
		a[0] = A;

		for (int i = 1; i < n; i++)
		{
			a[i] = A * pow(D, i);
		}

		printArr(a, n);

		delete[] a;

	}
	break;

	case 3:
	{
		int A, B;
		cout << "Введите число N (N>2):"; cin >> n;
		cout << "Введите число А и В:\nA:"; cin >> A;
		cout << "B:"; cin >> B;
		int* a = new int[n];

		a[0] = A;
		a[1] = B;
		int c = A + B;
		for (int i = 2; i < n; i++)
		{
			a[i] = c;
			c = c + a[i];
		}

		printArr(a, n);
		delete[] a;
	}
	break;

	case 4:
	{
		cout << "Введите размер массива:"; cin >> n;
		int* arr = new int[n];
		putArr(arr, n);
		cout << "\nВывод массива:" << endl;
		int l = 0, r = n - 1;
		while (l <= r)
		{
			cout << arr[l] << endl;
			if (l == r)
				break;
			cout << arr[r] << endl;
			l++;
			r--;
		}

		delete[] arr;
	}
	break;

	case 5:
	{
		cout << "Введите размер массива:"; cin >> n;
		int* arr = new int[n];
		putArr(arr, n);
		cout << "\nВывод массива :" << endl;
		for (int i = 1; i < n; i += 2)
		{
			cout << arr[i] << endl;
		}

		if (n % 2 > 0)
		{
			for (int i = n - 1; i >= 0; i -= 2)
			{
				cout << arr[i] << endl;
			}
		}
		else {
			for (int i = n - 2; i >= 0; i -= 2)
			{
				cout << arr[i] << endl;
			}
		}


		delete[] arr;
	}
	break;
	}


}
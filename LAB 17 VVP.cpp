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
	cout << "������: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void putarr(int* arr, int n)
{
	setlocale(LC_ALL, "ru");
	cout << "������� �������� �������:" << endl;
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
		cout << "������� ����� K � L (L>K):" << endl; cin >> k >> l;
		cout << "������� ������ ������� (N>L):"; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int b = 0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\n������� ��������������: " << (double)b / (l - k + 1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "������� ������ �������: "; cin >> n;
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
			cout << 0 << "\n��� ����� �� �������� �������������� ����������:" << endl;
		}
		else {
			cout << "������� � �������������� ���������� �����: " << d << endl;
		}
		delete[] arr;
		break;
	}
	case 3:
	{
		cout << "������� ������ �������: "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i += 2)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "���������� ������� � ������ ������� ��� " << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "������� ������ �������: "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		for (int i = n - 2; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "��������� ��������: " << arr[i] << endl;
				cout << "��� �����: " << i + 1 << "\t(���� ������ � 0, �� ��� �����" << i << ")" << endl;
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
		cout << "������� ������ �������: "; cin >> n;
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
					cout << "��� ���������� �������� ����� ��������: " << arr[i] << endl;
					cout << "�� ������ " << j + 1 << " � " << i + 1 << " (�� ���� �� ������ � 0 �� ������ ����� ���� " << j << " � " << i << ")" << endl;
					break;
				}
			}
		}
		if (c == 0)
		{
			cout << "� ������� ��� ���������� �������." << endl;
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
		cout << "������� ����� K � L (L>K):" << endl; cin >> k >> l;
		cout << "������� ������ ������� (N> L):"; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int b = 0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\n������� ��������������: " << (double)b / (l - k + 1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "������� ������ ������� "; cin >> n;
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
			cout << 0 << "\n��� ����� �� �������� �������������� ���������� " << endl;
		}
		else {
			cout << "������� � �������������� ���������� ����� " << d << endl;
		}
		break;
	}

	case 3:
	{
		cout << "������� ������ �������: "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i += 2)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "���������� ������� � ������ ������� ���" << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "������� ������ �������: "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		for (int i = n - 2; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "��������� ��������: " << arr[i] << endl;
				cout << "��� �����: " << i + 1 << "\t(���� ������ � 0, �� ��� ����� " << i << ")" << endl;
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
		cout << "������� ������ �������: "; cin >> n;
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
					cout << "��� ���������� �������� ����� ��������: " << arr[i] << endl;
					cout << "�� ������ " << j + 1 << " � " << i + 1 << " (�� ���� �� ������ � 0 �� ������ ����� ���� " << j << " � " << i << ")" << endl;
					break;
				}

			}
		}
		if (c == 0)
		{
			cout << "� ������� ��� ���������� �������." << endl;
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
	cout << "�������� �����:\n" <<
		"1. ������� �������������� (K, L)\n" <<
		"2.�������� �������������� ���������\n" <<
		"3.������ �����\n" <<
		"4.��������� ��������\n" <<
		"5.��� ���������� ��������" << endl; cin >> pynkt;
	cout << "�������� ������ ���������� �������:\n��������\n������" << endl; cin >> c;

	if (c == "1")
		Random(pynkt);
	if (c == "2")
		Hands(pynkt);

}
#include<iostream>
using namespace std;
int n;

int main()
{
	setlocale(LC_ALL, "ru");
	int pynkt;
	cout << "�������� �����:\n" <<
		"1.���� � �����\n" <<
		"2.�����\n" <<
		"3.������-�������� ���������� �������\n" <<
		"4.������ �������� ����� �� 100 �� 999\n" <<
		"5.��������� ���������.\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		int d, m;
		cout << "����� ������ "; cin >> m; cout << "����� ��� "; cin >> d;
		if (m == 2 && d > 29)
		{
			cout << "� ������� ��� ����� ������ 29.";
			break;
		}
		else
		{
			if (m == 2 && d == 29)
			{
				cout << "������ ����� ���� �������� ������� �������.";
				break;
			}
			else
			{
				switch (d)
				{
				case 10:
					cout << "������� ";
					break;

				case 11:
					cout << "����������� ";
					break;

				case 12:
					cout << "����������� ";
					break;

				case 13:
					cout << "����������� ";
					break;

				case 14:
					cout << "������������� ";
					break;

				case 15:
					cout << "����������� ";
					break;

				case 16:
					cout << "������������ ";
					break;

				case 17:
					cout << "����������� ";
					break;

				case 18:
					cout << "�������������";
					break;

				case 19:
					cout << "������������� ";
					break;

				case 20:
					cout << "��������� ";
					break;

				case 30:
					cout << "��������� ";
					break;

				default:
					if (d < 10)
					{
						cout << "";
						switch (d % 10)
						{
						case 1:
							cout << " ������ ";
							break;

						case 2:
							cout << " ������ ";
							break;

						case 3:
							cout << " ������ ";
							break;

						case 4:
							cout << " ��������� ";
							break;

						case 5:
							cout << " ����� ";
							break;

						case 6:
							cout << " ������ ";
							break;

						case 7:
							cout << " ������� ";
							break;

						case 8:
							cout << " ������� ";
							break;

						case 9:
							cout << " ������� ";
							break;
						}
						break;
					}
					else
					{
						switch (d / 10)
						{
						case 2:
							cout << "���������";
							break;

						case 3:
							cout << "���������";
							break;
						}
						switch (d % 10)
						{
						case 1:
							cout << " ������ ";
							break;

						case 2:
							cout << " ������ ";
							break;

						case 3:
							cout << " ������ ";
							break;

						case 4:
							cout << " ��������� ";
							break;

						case 5:
							cout << " ����� ";
							break;

						case 6:
							cout << " ������ ";
							break;

						case 7:
							cout << " ������� ";
							break;

						case 8:
							cout << " ������� ";
							break;

						case 9:
							cout << " ������� ";
							break;
						}
						break;
					}
				}

				switch (m)
				{
				case 1:
					cout << " ������ ";
					break;

				case 2:
					cout << " ������� ";
					break;

				case 3:
					cout << " ���� ";
					break;

				case 4:
					cout << " ������ ";
					break;

				case 5:
					cout << " ��� ";
					break;

				case 6:
					cout << " ���� ";
					break;

				case 7:
					cout << " ���� ";
					break;

				case 8:
					cout << " ������ ";
					break;

				case 9:
					cout << " �������� ";
					break;

				case 10:
					cout << " ������� ";
					break;

				case 11:
					cout << " ������ ";
					break;

				case 12:
					cout << " ������� ";
					break;
				}
				break;
			}
		}


	case 2:
		char a;
		cout << "����� ����� ������ � ���� ������������:\nS--��\nN--�����\nW--�����\nE--������\n\n" <<
			"���� ��� �������:\n0--���������� ����;\n1--������� �� ����;\n-1--������� �� �����;\n";
		cout << "�������� �����������: "; cin >> a;
		switch (a)
		{
		case 'S':
			cout << "����� ��������� �� �� \n";
			break;
		case 'N':
			cout << "����� ���������� �� ����� \n";
			break;
		case 'W':
			cout << "����� ���������� �� ����� \n";
			break;
		case 'E':
			cout << "����� ���������� �� ������ \n";
			break;
		default:
			break;
		}
		cout << "�������� ���� �� ������: "; cin >> n;

		switch (a)
		{
		case 'S':
			switch (n)
			{
			case 0:
				cout << "����� ��� ��� ���� �� ��\n\n";
				break;
			case 1:
				cout << "����� ������������ �� ���� � ���� �� ������\n\n";
				break;
			case -1:
				cout << "����� ������������ �� ����� � ���� �� �����\n\n";
				break;
			default:
				break;
			}
			break;
		case 'N':
			switch (n)
			{
			case 0:
				cout << "����� ��� ��� ���� �� �����\n\n";
				break;
			case 1:
				cout << "����� ������������ �� ���� � ���� �� �����\n\n";
				break;
			case -1:
				cout << "����� ������������ �� ����� � ���� �� ������\n\n";
				break;
			default:
				break;
			}
			break;
		case 'W':
			switch (n)
			{
			case 0:
				cout << "����� ��� ��� ���� �� �����\n\n";
				break;
			case 1:
				cout << "����� ������������ �� ���� � ���� �� ��\n\n";
				break;
			case -1:
				cout << "����� ������������ �� ����� � ���� �� �����\n\n";
				break;
			default:
				break;
			}
			break;
		case 'E':
			switch (n)
			{
			case 0:
				cout << "����� ��� ��� ���� �� ������\n\n";
				break;
			case 1:
				cout << "����� ������������ �� ���� � ���� �� �����\n\n";
				break;
			case -1:
				cout << "����� ������������ �� ����� � ���� �� ��\n\n";
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
		cout << "������� ����� ����� 10 � 40: "; cin >> k;
		switch (k)
		{
		case 10:
			cout << "������ ";
			break;

		case 11:
			cout << "����������� ";
			break;

		case 12:
			cout << "���������� ";
			break;

		case 13:
			cout << "���������� ";
			break;

		case 14:
			cout << "������������ ";
			break;

		case 15:
			cout << "���������� ";
			break;

		case 16:
			cout << "����������� ";
			break;

		case 17:
			cout << "���������� ";
			break;

		case 18:
			cout << "������������ ";
			break;

		case 19:
			cout << "������������ ";
			break;

		case 20:
			cout << "�������� ";
			break;

		case 30:
			cout << "�������� ";
			break;

		case 40:
			cout << "����� ";
			break;
		default:
			switch (k / 10)
			{
			case 2:
				cout << "�������� ";
				break;
			case 3:
				cout << "�������� ";
				break;
			}
			switch (k % 10)
			{
			case 1:
				cout << "���� ";
				break;
			case 2:
				cout << "��� ";
				break;
			case 3:
				cout << "��� ";
				break;
			case 4:
				cout << "������ ";
				break;
			case 5:
				cout << "����� ";
				break;
			case 6:
				cout << "����� ";
				break;
			case 7:
				cout << "���� ";
				break;
			case 8:
				cout << "������ ";
				break;
			case 9:
				cout << "������ ";
				break;
			}
			break;
		}
		cout << "�������" << endl;
		break;

	case 4:
		int l;
		cout << "������� ����� ����� 100 � 999: "; cin >> l;
		switch (l / 100)
		{
		case 1:
			cout << "��� ";
			break;
		case 2:
			cout << "������ ";
			break;
		case 3:
			cout << "������ ";
			break;
		case 4:
			cout << "��������� ";
			break;
		case 5:
			cout << "������� ";
			break;
		case 6:
			cout << "�������� ";
			break;
		case 7:
			cout << "������� ";
			break;
		case 8:
			cout << "��������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (l / 10 % 10)
		{
		case 0:
			cout << "";
			break;
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "�������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (l % 100)
		{
		case 10:
			cout << "������";
			break;
		case 11:
			cout << "�����������";
			break;
		case 12:
			cout << "����������";
			break;
		case 13:
			cout << "����������";
			break;
		case 14:
			cout << "������������";
			break;
		case 15:
			cout << "����������";
			break;
		case 16:
			cout << "�����������";
			break;
		case 17:
			cout << "����������";
			break;
		case 18:
			cout << "������������";
			break;
		case 19:
			cout << "������������";
			break;
		default:
			switch (l % 10)
			{
			case 0:
				cout << "";
				break;
			case 1:
				cout << "����";
				break;
			case 2:
				cout << "���";
				break;
			case 3:
				cout << "���";
				break;
			case 4:
				cout << "������";
				break;
			case 5:
				cout << "����";
				break;
			case 6:
				cout << "�����";
				break;
			case 7:
				cout << "����";
				break;
			case 8:
				cout << "������";
				break;
			case 9:
				cout << "������";
				break;
			}
			break;
		}
		break;

	case 5:
		int y;
		cout << "������� ���: "; cin >> y;
		cout << y << " ��� ��� ";
		y -= 3;
		switch (y % 60 / 12)
		{
		case 0:
			cout << "�������(���/��)";
			break;
		case 1:
			cout << "�������(���/��)";
			break;
		case 2:
			cout << "������(���/��)";
			break;
		case 3:
			cout << "�����(���/��)";
			break;
		case 4:
			cout << "������(���/��)";
			break;
		}
		switch (y % 12)
		{
		case 0:
			cout << " ������:";
			break;
		case 1:
			cout << " ����� ";
			break;
		case 2:
			cout << " ������ ";
			break;
		case 3:
			cout << " ����� ";
			break;
		case 4:
			cout << " ����� ";
			break;
		case 5:
			cout << " ������� ";
			break;
		case 6:
			cout << " �����";
			break;
		case 7:
			cout << " ������ ";
			break;
		case 8:
			cout << " ���� ";
			break;
		case 9:
			cout << " �������� ";
			break;
		case 10:
			cout << " ������ ";
			break;
		case 11:
			cout << " ������ ";
			break;
		}
		break;


	}
}
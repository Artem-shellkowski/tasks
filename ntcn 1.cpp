// N 1
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int HP;
	bool a;
	cout << "� ������ ����� HP";
	cin >> HP;
	if (HP > 0)
	{
		a = HP > 0;
		cout << endl << a;
	}
	else
	{
		a = HP < 0;
		cout << endl << a;
	}

}

 // N 2
/*#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int C;
	cout << "� ������ ����� HP"<< endl;
	cin >> C;
	if (C > 20)
	{
		cout << "on" << endl;
	}
	else
	{
		cout << "of" << endl;
	}

}
*/
// N 3
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int T;
	int C;
	int V;
	cout <<"������� �������� ����������� ";
	cin >> T ;
	cout << endl << "����������� � ������� � ������ ������ " ;
	cin >> C ;
	cout << endl << "���������� � ������� � ������ ������ " ;
	cin >> V ;
	if (C > T && V < 80)
	{ 
		cout << "on" << endl;
	}
	else
	{
		cout << "of" << endl;
	}

}
*/
// N 4
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	int y;
	cout <<"������� X  ";
	cin >> x ;
	if (x > 0)
	{
		int y = sqrt(x - 2);
		cout << y;
	}
	else if(x == 0)
	{
		int	y = 0;
		cout << y;
	}
	else if (x < 0)
	{
		int y = abs(x);
		cout << y;
	}

}
*/
// N 5
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	int y;	cout <<"������� ����� ������� ��� 1 �.�.�. ";
	cin >> x ;
	switch (x)
	{
	case 1: cout << "��� ������� �����"; break;
	    case 2: cout << "��� ������������ �����"; break;
	    case 3: cout << "��� ������� �����"; break;
		case 4: cout << "��� ���������� �����"; break;
		case 5: cout << "'��� �������"; break;
		default: cout << "� ��� ���� 5 �������!"; break;
		break;
	}

}
*/
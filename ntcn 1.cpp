// N 1
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int HP;
	bool a;
	cout << "В ведите число HP";
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
	cout << "В ведите число HP"<< endl;
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
	cout <<"задайте жилаемую температуру ";
	cin >> T ;
	cout << endl << "Тимпература в комноте в данный момент " ;
	cin >> C ;
	cout << endl << "Влажносьть в комноте в данный момент " ;
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
	cout <<"задайте X  ";
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
	int y;	cout <<"задайте палец бользой это 1 и.т.д. ";
	cin >> x ;
	switch (x)
	{
	case 1: cout << "это большой палец"; break;
	    case 2: cout << "это указательный палец"; break;
	    case 3: cout << "это средный палец"; break;
		case 4: cout << "это безымянный палец"; break;
		case 5: cout << "'это мезиниц"; break;
		default: cout << "у нас токо 5 пальцев!"; break;
		break;
	}

}
*/
#include <iostream>
#include <string>

using namespace std;

string func1(int d1, int m)
{
	int m1 = d1 + m - 1;
	if (m1 <= 0)
	{
		return "Неверно";
	}
	else
		if (d1 < 0)
			if (m1 % 3 == 0)
				return "Верно";
			else
				return "Неверно";
		else
			if (m % 3 == 0)
				return "Верно";
			else
				return "Неверно";
}

int main()
{
	setlocale(LC_ALL, "russian");
	int d1;
	cout << "Введите первое целое число" << endl;
	cin >> d1;

	int m;
	cout << "Введите натуральное число" << endl;
	cin >> m;

	cout << func1(d1, m) << endl;

	system("pause");
}
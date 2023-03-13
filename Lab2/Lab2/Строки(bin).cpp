#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void SortBinary(string *str)
{
	string temp;

	for (int z = 0; z < 4; z++)
	{
		for (int i = 0; i < 4; i++)
		{

			if (str[i].size() > str[i + 1].size())
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				continue;
			}
			if (str[i].size() == str[i + 1].size())
			{
				for (int j = 0; j < str[i].size(); j++)
				{
					if (str[i][j] > str[i + 1][j])
					{
						temp = str[i];
						str[i] = str[i + 1];
						str[i + 1] = temp;
						break;
					}
					if (str[i][j] == str[i + 1][j])
						continue;
					if (str[i][j] < str[i + 1][j])
						break;
				}
			}
		}
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    string str[5];


	for (int i = 0; i < 5 ; i++)
	{
		cout << "Введите " << i + 1 << " число в двоичном виде" << endl;
		cin >> str[i];
		cout << endl;

	}

	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << " ";
	}


	SortBinary(str);

	cout << endl << "Новый массив " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << " ";
	}

	system("pause");
}

#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <chrono>

using namespace std;

int Fibonacci(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "Какое число Фибоначчи вы хотите найти?" << endl;
	cin >> n;
	cout << endl;
	
	int* arr = new int[n];
	arr[0] = 1;
	arr[1] = 1;

	chrono::steady_clock::time_point begin = chrono::steady_clock::now();

	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << "Нужное вам число фибоначи равно: " << arr[n - 1] << endl;

	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	__int64 secondsDuratin = chrono::duration_cast<chrono::seconds>(end - begin).count();
	__int64 microsecondsDuratin = chrono::duration_cast<chrono::microseconds>(end - begin).count();
	__int64 nanosecondsDuratin = chrono::duration_cast<chrono::nanoseconds> (end - begin).count();

	cout << "seconds algoritm duration = " << secondsDuratin << endl;
	cout << "microseconds algoritm duration = " << microsecondsDuratin << endl;
	cout << "nanoseconds algoritm duration = " << nanosecondsDuratin << endl;


	cout << endl << endl;


	chrono::steady_clock::time_point begin1 = chrono::steady_clock::now();

	cout << "Нужное вам число фибоначи равно(Рекурсия): " << Fibonacci(n) << endl;

	chrono::steady_clock::time_point end1 = chrono::steady_clock::now();
	__int64 secondsDuratin1 = chrono::duration_cast<chrono::seconds>(end1 - begin1).count();
	__int64 microsecondsDuratin1 = chrono::duration_cast<chrono::microseconds>(end1 - begin1).count();
	__int64 nanosecondsDuratin1 = chrono::duration_cast<chrono::nanoseconds> (end1 - begin1).count();

	cout << "seconds algoritm duration = " << secondsDuratin1 << endl;	
	cout << "microseconds algoritm duration = " << microsecondsDuratin1 << endl;
	cout << "nanoseconds algoritm duration = " << nanosecondsDuratin1 << endl;

	system("pause");
}

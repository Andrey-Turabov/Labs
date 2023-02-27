
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[3];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    int temp[3] = { };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i] += a[j][i];
        }
    }

    bool test = 1;

    for (int i = 0; i < 3; i++)
    {
        if (temp[i] != 0)
        {
            test = 0;
            break;
        }
    }

    if (test)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    system("pause");
}


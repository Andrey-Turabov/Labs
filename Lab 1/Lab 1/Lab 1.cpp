#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int temp = str.size();

    for (int i = 0; i < temp; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'y':
        case 'Y':
        case 'e':
        case 'E':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
            for(int j = i; j < temp; j++)
            {
                str[j] = str[j + 1];
            }
            temp--;
            i--;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < temp; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 )
        {
            str[i] += 32;
        }
    }

    string str1= new char[temp*2];
    int j = 0;

    for (int i = 0; i < temp; i++)
    {
        str1[j] = '.';
        j++;
        str1[j] = str[i];
        j++;
    }


    cout << str1 << endl;
    system("pause");
}


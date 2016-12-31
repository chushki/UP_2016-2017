#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void subStr(const char* str, char c)
{
    bool flag = false;
    for (int i=0; str[i]; i++)
    {
        if (str[i] == c)
        {
            cout << "Position: " << i+1 << endl;
            cout << "Remaining string: ";

            for (int j=i; str[j]; j++)
                cout << str[j];

            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "Symbol not in the string!";
}

int main()
{
    char c, str[MAX_SIZE];
    cout<<"Enter symbol: ";
    cin >> c;
    cout<<"Enter string: ";
    cin>> str;

    subStr (str, c);

    return 0;
}

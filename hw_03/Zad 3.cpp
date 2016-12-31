#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void checkForT (const char* str)
{
    bool flag = false;
    for (int i=0; str[i]; i++)
    {
        if (str[i] == 'T')
        {
            cout << "Position of T: " << i + 1 << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "Symbol T not in the string!";
}

int main()
{
    char str[MAX_SIZE];
    cin >> str;

    checkForT (str);

    return 0;
}


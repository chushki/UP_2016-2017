#include <iostream>

using namespace std;

char validation(char c)
{
    while (!(c >= 'A' && c <= 'Z'))
    {
        cout << "Enter capital letter: ";
        cin >> c;
    }

    return c;
}

void rhombus (char c)
{
    int i = 0;
    for (i=0; i < (int)c - 65; i++)
    {

        if (i == 0)
            cout << (char)(65+i) << endl;

        else
        {
            cout << (char)(65+i);

            if (i == 1) cout << "*";
            if (i == 2) cout << "***";
            if (i > 2)
            {
                for(int j=0; j<i; j++)
                {
                    cout << "**";
                }
            }
            cout << (char)(65+i);
            cout << endl;
        }
    }
    for(; i>=0; i--)
    {

        if (i == 0)
            cout << (char)(65+i) << endl;
        else
        {
            cout << (char)(65+i);

            if (i == 1) cout << "*";
            if (i == 2) cout << "***";
            if (i > 2)
            {
                for (int j=0; j<i; j++)
                {
                    cout << "**";
                }
            }
            cout << (char)(65+i);
            cout << endl;
        }
    }
}

int main()
{
    char c = validation(c);

    rhombus(c);

    return 0;
}



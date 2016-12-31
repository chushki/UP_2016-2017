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

void triangle(char c)
{
    int i = 0;
    for(i=0; i <= (int)c-65; i++)
    {
        for(int j=i; j>=0; j--)
        {
            cout << (char) (65+j);
        }
        cout << endl;
    }
}

int main()
{
    char c = validation(c);

    triangle(c);

    return 0;
}

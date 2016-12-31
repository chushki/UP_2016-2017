#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 50;

bool validation(const char* str)
{
    bool flag = true;

    if (strlen(str) >= 30 && strlen(str) <= 50)
        flag = false;

    return flag;
}

void letterPosition(const char* str)
{
    cout << "The first letter is: " << *str << " ";
    int i = 0;
    // for(i = 0; str[i]; i++);
    while (str[i])
    {
        i++;
    }
    cout << "The middle letter is: " << str[i/2] << " ";
    cout << "The last letter is: " << str[i-1] << " ";
}

int main()
{
    char str[MAX_SIZE];
    while (validation(str))
    {
        cout << "Enter string: ";
        cin >> str;
    }

    letterPosition(str);

    return 0;
}





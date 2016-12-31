#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void heroesAndBreeds (const char* str)
{
    int heroes = 0, breeds = 0;

    bool capital = false, flag = true;

    for (int i=0; ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            capital = true;

        if (str[i] == ' ' || str[i] == '\0')
        {
            if (capital)
                heroes++;
            else
            {
                if (!flag)
                    breeds++;
            }

            capital = false;
            flag = true;
        }
        else
            flag = false;

        if (str[i] == '\0')
            break;
    }

    cout << "Heroes/Breeds = " << heroes << "/" << breeds << endl;
}

int main()
{
    char str[MAX_SIZE];

    cin.getline(str, MAX_SIZE);

    heroesAndBreeds(str);

    return 0;
}

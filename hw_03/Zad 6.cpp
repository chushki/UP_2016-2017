#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE=100;

void srt (char *str)
{
    int length = strlen(str);
    for (int i=0; i < length-1; i++)
    {
        for (int j=i; j < length; j++)
        {
            if (str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void diffChars (char str[])
{

    char stri[50];
    int k = 0;

    for(int i=0; str[i]; i++)
    {
        int counter = 0;

        if(i == 0 && str[i] != ' ')
        {
            stri[k] = str[i];
            k++;
            continue;
        }

        for (int j=0; j < strlen(stri); j++)
        {
            if (str[i] == stri[j])
                counter++;
        }

        if(counter == 0 && str[i] != ' ')
        {
            stri[k] = str[i];
            k++;
        }
    }
    stri[k] = '\0';
   // cout << stri << endl;
    srt(stri);

    cout << stri << endl << strlen(stri) << " symbols.";
}

void lowerCase(char str[])
{
    for(int i=0; str[i]; i++)
        str[i] = (char)tolower(str[i]);
}

int main()
{
    char str[MAX_SIZE];

    cin.getline(str,MAX_SIZE);

    lowerCase(str);
    diffChars(str);

    return 0;
}






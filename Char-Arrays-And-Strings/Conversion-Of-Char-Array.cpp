#include <iostream>
#include <cstring>
using namespace std;
void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}
void toLower(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}
int main()
{
    char word[] = "HELLOWORLD";
    // toUpper(word, strlen(word));
    toLower(word, strlen(word));
    cout << word << endl;
    return 0;
}
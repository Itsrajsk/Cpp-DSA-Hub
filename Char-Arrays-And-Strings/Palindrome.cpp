#include <iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char word[], int n)
{
    int st = 0, end = n - 1;
    while (st == end)
    {
        if (word[st++] == word[end--])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char word[] = "racecar";
    if (checkPalindrome(word, strlen(word)))
    {
        cout << word << " Is A Palindrome" << endl;
    }
    else
    {
        cout << word << " Is Not A Palindrome" << endl;
    }
    return 0;
}
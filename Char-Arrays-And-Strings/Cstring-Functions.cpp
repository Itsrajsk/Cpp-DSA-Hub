#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100] = "Hello ";
    char str2[100] = "World!";

    cout << strcpy(str1, str2) << endl;
    cout << strcat(str1, str2) << endl;
    cout << strcmp(str1, str2) << endl;

    return 0;
}
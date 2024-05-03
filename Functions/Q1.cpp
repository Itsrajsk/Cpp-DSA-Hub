#include <iostream>
using namespace std;

bool checkPalindrome(int n)
{
    int numCopy = n;
    int rem;
    int res = 0;
    while (n != 0)
    {
        rem = n % 10;
        res = res * 10 + rem;
        n /= 10;
    }
    return (res == numCopy);
}
int main()
{
    cout << checkPalindrome(121);
    return 0;
}
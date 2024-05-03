#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int res = 0;
    while (n != 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main()
{
    cout << sumOfDigits(1020);
    return 0;
}
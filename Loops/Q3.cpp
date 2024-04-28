#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit = 0, res = 0;
    cout << "Enter Number : " << endl;
    cin >> n;
    int numCopy = n;

    while (n != 0)
    {
        lastDigit = n % 10;
        res += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }
    if (res == numCopy)
    {
        cout << "This is Armstrong Number." << endl;
    }
    return 0;
}
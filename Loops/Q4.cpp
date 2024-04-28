#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int n;
    cout << "Enter Number : " << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int curr = i;
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << " ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int largestNumber(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    cout << largestNumber(1, 2, 3);
    return 0;
}
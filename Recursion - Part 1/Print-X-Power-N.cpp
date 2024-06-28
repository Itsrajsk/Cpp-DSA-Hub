#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int result = x * pow(x, n - 1);
    cout << result << endl;
    return result;
}

int main()
{
    cout << "2^10 = " << pow(2, 1) << endl;
    return 0;
}

#include <iostream>
using namespace std;
int calculateFormula(int a, int b)
{
    int val1 = a * a;
    int val2 = b * b;
    int val3 = 2 * a * b;

    return val1 + val2 + val3;
}
int main()
{
    cout << calculateFormula(2, 4);
    return 0;
}
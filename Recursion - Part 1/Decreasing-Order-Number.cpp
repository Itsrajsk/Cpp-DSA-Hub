#include <iostream>
using namespace std;

// Function to print numbers in decreasing order from n to 1
void printInDecreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printInDecreasingOrder(n - 1);
}

int main()
{
    int startNumber = 5;
    printInDecreasingOrder(startNumber);
    return 0;
}

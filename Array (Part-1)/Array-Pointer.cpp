#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int x = 5;
    int *ptr;
    ptr = &x;
    cout << *ptr << endl;
    // Invalid Operation
    // arr = &x;
    return 0;
}
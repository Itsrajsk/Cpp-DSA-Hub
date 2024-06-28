#include <iostream>
using namespace std;
bool isSorted(int *arr, int n, int i)
{
    if (i == n - 1)
        return true;
    if (arr[i] > arr[i + 1])
        return false;
    return isSorted(arr, n, i + 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    isSorted(arr, 5, 0) ? cout << "true" : cout << "false";
    return 0;
}
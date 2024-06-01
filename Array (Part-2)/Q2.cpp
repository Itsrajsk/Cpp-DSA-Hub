#include <iostream>
using namespace std;
int indexOfTarget(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element Found At Index = " << i << endl;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << indexOfTarget(arr, n, 9);
    return 0;
}
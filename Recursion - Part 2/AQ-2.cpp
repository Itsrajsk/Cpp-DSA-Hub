#include <iostream>
using namespace std;

void findAllOccur(int *arr, int n, int i, int key)
{
    if (i == n)
    {
        return;
    }
    if (arr[i] == key)
    {
        cout << i << " ";
    }
    findAllOccur(arr, n, i + 1, key);
}

int main()
{
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findAllOccur(arr, n, 0, 2);
    return 0;
}

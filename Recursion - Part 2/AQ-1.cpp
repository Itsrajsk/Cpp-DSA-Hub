#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Index of key: " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}

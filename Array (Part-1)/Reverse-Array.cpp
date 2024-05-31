#include <iostream>
using namespace std;
void reverseWithExtraSpace(int *arr, int n)
{
    int newArr[n];
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = newArr[i];
    }
}
void reverseWithNoExtraSpace(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void output(int arr[], int n)
{
    cout << "Printing Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    reverseWithNoExtraSpace(arr, n);
    output(arr, n);
    // reverseWithExtraSpace(arr, n);
    return 0;
}
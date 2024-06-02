#include <iostream>
using namespace std;
void output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
    output(arr, n);
}
int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    bubbleSort(arr, 5);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int partition(int arr[], int si, int ei)
{
    int pivot = arr[ei];
    int i = si - 1;

    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}
void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, ei);
}
int main()
{
    cout << endl;
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    cout << "Before Sorting : " << endl;
    printArr(arr, n);
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "After Sorting : " << endl;
    printArr(arr, n);
    cout << endl;
    return 0;
}
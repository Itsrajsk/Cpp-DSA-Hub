#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}
void mergerSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int mid = (si + ei) / 2;

    mergerSort(arr, si, mid);     // left
    mergerSort(arr, mid + 1, ei); // right

    merge(arr, si, mid, ei);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << endl;
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    cout << "Before Sorting : " << endl;
    printArr(arr, n);
    cout << endl;
    mergerSort(arr, 0, n - 1);
    cout << "After Sorting : " << endl;
    printArr(arr, n);
    cout << endl;
    return 0;
}
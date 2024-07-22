#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void changeArray(int arr[], int n, int i)
{
    if (i == 5)
    {
        printArr(arr, n);
        return;
    }
    arr[i] = i + 1;
    changeArray(arr, n, i + 1);
    arr[i] -= 2;
}
int main()
{
    cout << endl;
    int arr[5] = {0};
    int n = 5;
    changeArray(arr, n, 0);
    printArr(arr, n);
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
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
    // Array Creation
    int arr[5];
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(int);
    // Array Input
    input(arr, n);
    // Array Output
    output(arr, n);
    return 0;
}
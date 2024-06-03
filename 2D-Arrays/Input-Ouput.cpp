#include <iostream>
using namespace std;

void input(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void output(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3]; // Changed array size to match n and m
    int n = 3, m = 3;

    cout << "Enter elements of the array:" << endl;
    input(arr, n, m);

    cout << "The array elements are:" << endl;
    output(arr, n, m);

    return 0;
}

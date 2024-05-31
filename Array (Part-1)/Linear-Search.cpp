#include <iostream>
using namespace std;
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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
    output(arr, n);
    cout << "\nElement At Index : " << linearSearch(arr, n, 5);
    return 0;
}
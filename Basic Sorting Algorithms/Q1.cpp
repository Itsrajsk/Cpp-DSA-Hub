#include <iostream>
using namespace std;
void output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break;
        }
    }
    output(arr, n);
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    output(arr, n);
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] < curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
    }
    output(arr, n);
}
void countingSort(int arr[], int n)
{
    int freq[100000];
    int minVal = INT16_MAX;
    int maxVal = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }

    for (int i = maxVal, j = 0; i >= minVal; i--)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    output(arr, n);
}
int main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    cout << "Bubble Sort : " << endl;
    bubbleSort(arr, 10);
    cout << "\nSelection Sort : " << endl;
    selectionSort(arr, 10);
    cout << "\nInsertion Sort : " << endl;
    insertionSort(arr, 10);
    cout << "\nCounting Sort : " << endl;
    countingSort(arr, 10);
    return 0;
}
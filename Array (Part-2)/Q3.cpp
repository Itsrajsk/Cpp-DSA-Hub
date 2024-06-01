#include <iostream>
using namespace std;
int largestSubarrProduct(int *arr, int n)
{
    int maxProd = INT32_MIN;
    int currentProd = 1;
    for (int i = 0; i < n; i++)
    {
        currentProd *= arr[i];
        maxProd = max(maxProd, currentProd);
        if (currentProd < 0)
        {
            currentProd = 1;
        }
    }
    return maxProd;
}
int main()
{
    int arr[] = {-2, 0, -1};
    int n = sizeof(arr) / sizeof(int);
    cout << "Largest Product From Subarray = " << largestSubarrProduct(arr, n);
    return 0;
}
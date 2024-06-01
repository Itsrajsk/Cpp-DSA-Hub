#include <iostream>
using namespace std;
void maxSubarrSum(int arr[], int n)
{
    int maxSum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(currSum, maxSum);
        }
        cout << endl;
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}
void maxSubarrSum2(int arr[], int n)
{
    int maxSum = INT8_MIN;
    for (int start = 0; start < n; start++) // start = 2
    {
        int currSum = 0;
        for (int end = start; end < n; end++) // end = 2,3,4,5
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}
void maxSubarrSum3(int arr[], int n)
{
    int maxSum = INT8_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}
int main()
{
    int arr[] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(int);
    maxSubarrSum3(arr, n);
    return 0;
}
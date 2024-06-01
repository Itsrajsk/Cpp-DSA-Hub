#include <iostream>
using namespace std;
int trap(int *heights, int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n - 1] = heights[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {

        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
    }

    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    return waterTrapped;
}
int main()
{
    int heights[] = {5, 4, 3, 2, 1};
    int n = sizeof(heights) / sizeof(int);
    cout << "Total Water Trapped = " << trap(heights, n);
    return 0;
}
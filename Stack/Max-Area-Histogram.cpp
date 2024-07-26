#include <bits/stdc++.h>
using namespace std;

void maxAreaHistogram(vector<int> heights)
{
    int n = heights.size();
    stack<int> s;
    vector<int> nsl(n), nsr(n);

    // Next Smaller Left
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            nsl[i] = -1;
        }
        else
        {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        s.pop();
    }

    // Next Smaller Right
    for (int i = n - 1; i >= 0; --i)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            nsr[i] = n;
        }
        else
        {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    int maxArea = 0;
    for (int i = 0; i < n; ++i)
    {
        int width = nsr[i] - nsl[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }

    cout << "Max Area = " << maxArea << endl;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    maxAreaHistogram(heights);
    return 0;
}

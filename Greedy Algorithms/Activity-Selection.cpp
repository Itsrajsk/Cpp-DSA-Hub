#include <bits/stdc++.h>
using namespace std;
int activitySelection(vector<int> start, vector<int> end)
{
    cout << "Selecting A0\n";
    int count = 1;
    int currEndTime = end[0];

    for (int i = 1; i < start.size(); i++)
    {
        if (start[i] >= currEndTime)
        {
            cout << "Selecting A" << i << endl;
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}
int main()
{
    cout << endl;
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    cout << "Selected Activity Count = " << activitySelection(start, end) << endl;
    cout << endl;
    return 0;
}
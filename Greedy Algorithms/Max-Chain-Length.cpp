#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
int maxChainLength(vector<pair<int, int>> pairs)
{
    int ans = 1;
    int currEnd = pairs[0].second;
    sort(pairs.begin(), pairs.end(), compare);

    for (int i = 0; i < pairs.size(); i++)
    {
        if (pairs[i].first >= currEnd)
        {
            ans++;
            currEnd = pairs[i].second;
        }
    }
    cout << "Max Chain Length = " << ans << endl;
    return ans;
}
int main()
{
    cout << endl;
    int n = 5;
    vector<pair<int, int>> pairs(n, make_pair(0, 0));
    pairs[0] = make_pair(5, 24);
    pairs[1] = make_pair(39, 60);
    pairs[2] = make_pair(5, 28);
    pairs[3] = make_pair(27, 40);
    pairs[4] = make_pair(50, 90);
    maxChainLength(pairs);
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int gridWays(int r, int c, int n, int m)
{
    if (r >= n - 1 && c >= m - 1)
    {
        return 1;
    }
    if (r >= n || c >= m)
    {
        return 0;
    }

    int v1 = gridWays(r + 1, c, n, m);
    int v2 = gridWays(r, c + 1, n, m);

    return v1 + v2;
}
int main()
{
    cout << endl;
    int m = 3;
    int n = 3;
    cout << gridWays(0, 0, n, m);
    cout << endl;
    return 0;
}
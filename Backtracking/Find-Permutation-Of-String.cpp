#include <bits/stdc++.h>
using namespace std;
void permutation(string str, string ans)
{
    int n = str.size();
    if (n == 0)
    {
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
        permutation(nextStr, ans + ch);
    }
}
int main()
{
    cout << endl;
    string str = "abc";
    string ans = "";
    permutation(str, ans);
    cout << endl;
    return 0;
}
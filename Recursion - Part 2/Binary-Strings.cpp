#include <iostream>
using namespace std;
void binaryStrings(int n, string ans)
{
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (ans[ans.size() - 1] != '1')
    {
        binaryStrings(n - 1, ans + '0');
        binaryStrings(n - 1, ans + '1');
    }
    else
    {
        binaryStrings(n - 1, ans + '0');
    }
}
int main()
{
    string ans = "";
    binaryStrings(3, ans);
    return 0;
}
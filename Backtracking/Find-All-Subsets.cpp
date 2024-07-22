#include <bits/stdc++.h>
using namespace std;
void printSubsets(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << "\n";
        return;
    }
    char ch = str[0];
    printSubsets(str.substr(1, str.size() - 1), subset + ch); // Yes
    printSubsets(str.substr(1, str.size() - 1), subset);      // No
}
int main()
{
    cout << endl;
    string str = "abc";
    string subset = "";
    printSubsets(str, subset);
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void firstNonRepeatingNumber(string str)
{
    int freq[26] = {0};
    queue<char> q;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;

        while (!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }
        if (q.empty())
        {
            cout << "-1\n";
        }
        else
        {
            cout << q.front() << endl;
        }
    }
}
int main()
{
    cout << endl;
    string str = "aabccxb";
    firstNonRepeatingNumber(str);
    cout << endl;
    return 0;
}
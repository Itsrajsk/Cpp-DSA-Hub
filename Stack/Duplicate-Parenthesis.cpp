#include <bits/stdc++.h>
using namespace std;
bool isValid(string str)
{
    stack<int> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ')')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.top() == '(')
            {
                return true;
            }

            while (s.top() != '(')
            {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}
int main()
{
    cout << endl;
    string s1 = "((a+b)+(a+b))";
    string s2 = "((a+b)+a)";
    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;
    cout << endl;
    return 0;
}
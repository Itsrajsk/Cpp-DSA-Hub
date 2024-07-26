#include <bits/stdc++.h>
using namespace std;
bool validParenthesis(string s1)
{
    stack<char> s;
    for (int i = 0; i < s1.size(); i++)
    {
        char ch = s1[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }

            char top = s.top();
            if ((top == '(' && s1[i] == ')') ||
                (top == '[' && s1[i] == ']') ||
                (top == '{' && s1[i] == '}'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}
int main()
{
    cout << endl;
    string s1 = "({[]})";
    string s2 = ")()(";
    cout << validParenthesis(s2);
    cout << endl;
    return 0;
}
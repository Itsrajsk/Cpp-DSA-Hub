#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

int main()
{
    cout << endl;
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    // Call reverse function
    reverse(s);

    // Correct the while loop condition to s.empty()
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}

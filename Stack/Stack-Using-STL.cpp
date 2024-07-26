#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl;
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
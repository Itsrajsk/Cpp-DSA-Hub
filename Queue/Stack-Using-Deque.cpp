#include <bits/stdc++.h>
using namespace std;
class Stack
{
    deque<int> dq;

public:
    void push(int data)
    {
        return dq.push_back(data);
    }
    void pop()
    {
        return dq.pop_back();
    }
    int top()
    {
        return dq.back();
    }
    bool empty()
    {
        return dq.size() == 0;
    }
};
int main()
{
    cout << endl;
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}
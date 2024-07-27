#include <bits/stdc++.h>
using namespace std;
class Queue
{
    deque<int> dq;

public:
    void push(int data)
    {
        return dq.push_back(data);
    }
    void pop()
    {
        return dq.pop_front();
    }
    int front()
    {
        return dq.front();
    }
    bool empty()
    {
        return dq.size() == 0;
    }
};
int main()
{
    cout << endl;
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}
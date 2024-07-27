#include <bits/stdc++.h>
using namespace std;
class stackUsingQueue
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int data)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(data);

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack Is Empty" << endl;
            return;
        }
        return q1.pop();
    }
    int front()
    {
        if (q1.empty())
        {
            cout << "Stack Is Empty" << endl;
            return -1;
        }
        return q1.front();
    }
    void print()
    {
        while (!q1.empty())
        {
            cout << q1.front() << " ";
            q1.pop();
        }
    }
};
int main()
{
    cout << endl;
    stackUsingQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.print();
    cout << endl;
    return 0;
}
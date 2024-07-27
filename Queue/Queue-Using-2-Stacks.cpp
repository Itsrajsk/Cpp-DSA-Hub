#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int data)
    {
        // Move all elements from s1 to s2
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        // Push item into s1
        s1.push(data);

        // Push everything back to s1
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        s1.pop();
    }

    int front()
    {
        if (s1.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s1.top();
    }

    void print()
    {
        stack<int> temp = s1;
        while (!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main()
{
    cout << endl;
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.print(); // Should print: 1 2 3
    cout << endl;
    return 0;
}
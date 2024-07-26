#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int n = 5;
    int *arr = new int[n];
    int topIdx = -1;

    void push(int val)
    {
        if (topIdx >= n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIdx] = val;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        topIdx--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIdx];
    }

    bool isEmpty()
    {
        return topIdx < 0;
    }

    void print()
    {
        while (!isEmpty())
        {
            cout << top() << " ";
            pop();
        }
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.print();
    cout << endl;
    return 0;
}

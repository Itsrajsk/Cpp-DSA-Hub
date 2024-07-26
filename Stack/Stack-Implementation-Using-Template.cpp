#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        vec.pop_back();
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1; // Assuming -1 is not a valid stack value
        }
        return vec.back();
    }

    bool isEmpty()
    {
        return vec.empty();
    }

    void print()
    {
        while (!isEmpty())
        {
            cout << top() << " ";
            pop();
        }
    }
};
int main()
{
    cout << endl;
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.print();

    cout << endl;
    return 0;
}

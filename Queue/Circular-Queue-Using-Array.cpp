#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int currSize;
    int capacity;
    int f, r;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data)
    {
        if (currSize == capacity)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
    }

    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
    }

    int front()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty()
    {
        return currSize == 0;
    }

    void print()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "[ ";
        for (int i = 0; i < currSize; i++)
        {
            cout << arr[(f + i) % capacity] << " ";
        }
        cout << "]" << endl;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();
    q.pop();
    q.print();
    q.push(5);
    q.push(6);
    q.print();
    cout << "Front element: " << q.front() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Queue Is Empty !" << endl;
            return;
        }
        else
        {
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
    }

    int front()
    {
        if (head == NULL)
        {
            cout << "Queue Is Empty !" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }

    void print()
    {
        cout << endl;
        Node *temp = head;
        cout << "[ ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]";
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
    q.print();
    q.pop();
    q.print();
    cout << q.front() << endl;
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = NULL;
    }
};
template <class T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(T val)
    {
        Node<T> *newNode = new Node<T>(val);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop()
    {
        Node<T> *temp = head;
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
    }
    T empty()
    {
        return head == NULL;
    }
    T top()
    {
        return head->data;
    }
    void print()
    {
        while (!empty())
        {
            cout << top() << " ";
            pop();
        }
    }
};

// class Stack
// {
//     list<T> ll;

// public:
//     void push(T val)
//     {
//         ll.push_front(val);
//     }

//     void pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         ll.pop_front();
//     }

//     bool isEmpty()
//     {
//         return ll.size() == 0;
//     }

//     T top()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             throw out_of_range("Stack is empty");
//         }
//         return ll.front();
//     }

//     void print()
//     {
//         while (!isEmpty())
//         {
//             cout << top() << " ";
//             pop();
//         }
//     }
// };

int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.print();
    cout << endl;
    return 0;
}

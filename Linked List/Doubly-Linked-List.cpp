#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is Empty\n";
        }
        else
        {
            Node *temp = tail->prev;
            tail->prev = NULL;
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
};
int main()
{
    cout << endl;
    DoublyList dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printList();
    dbll.pop_back();
    // dbll.push_back(5);
    dbll.printList();

    cout << endl;
    return 0;
}
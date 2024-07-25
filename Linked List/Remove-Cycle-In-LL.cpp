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
        next = nullptr;
    }

    ~Node()
    {
        if (next != nullptr)
        {
            delete next;
            next = nullptr;
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = nullptr;
        tail = nullptr;
    }

    ~List()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
        head = tail = nullptr;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        cout << endl;
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }

    void removeCycle(Node *head)
    {
        if (!isCycle(head))
        {
            cout << "Cycle Doesn't Exist" << endl;
            return;
        }

        Node *slow = head;
        Node *fast = head;

        // Find the meeting point
        do
        {
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        // Find the start of the cycle
        slow = head;
        Node *prev = nullptr; // To keep track of the node before the meeting point
        while (slow != fast)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the cycle
        if (prev != nullptr)
        {
            prev->next = nullptr;
        }
        else
        {
            // Handle the case when the cycle is at the beginning
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = nullptr;
        }
    }
};

int main()
{
    cout << endl;
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.tail->next = ll.head; // Creating a cycle for testing

    ll.removeCycle(ll.head);
    ll.printList();
    cout << endl;
    return 0;
}

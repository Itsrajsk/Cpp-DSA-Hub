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

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
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

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Position Invalid" << endl;
            return;
        }

        Node *newNode = new Node(val);

        if (pos == 0)
        {
            newNode->next = head;
            head = newNode;
            if (tail == nullptr)
            {
                tail = newNode;
            }
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Position Invalid" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr)
        {
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "LL is empty!" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
        }
        temp->next = nullptr;
        delete temp;
    }

    void pop_back()
    {
        if (head == nullptr)
        {
            cout << "LL is empty!" << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
            return;
        }

        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = nullptr;
    }

    int searchItr(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != nullptr)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(Node *temp, int key)
    {
        if (temp == nullptr)
        {
            return -1;
        }
        if (temp->data == key)
        {
            return 0;
        }
        int idx = helper(temp->next, key);
        if (idx == -1)
        {
            return -1;
        }
        return idx + 1;
    }

    int searchRec(int key)
    {
        return helper(head, key);
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *curr = head;

        while (curr != nullptr)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    int getSize()
    {
        Node *temp = head;
        int i = 0;
        while (temp != nullptr)
        {
            temp = temp->next;
            i++;
        }
        return i;
    }

    void removeNth(int n)
    {
        int size = getSize();
        if (n > size || n <= 0)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        if (n == size)
        {
            pop_front();
            return;
        }

        Node *prev = head;
        for (int i = 1; i < size - n; i++)
        {
            prev = prev->next;
        }

        Node *toDel = prev->next;
        prev->next = toDel->next;
        if (toDel == tail)
        {
            tail = prev;
        }
        toDel->next = nullptr;
        delete toDel;
    }

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "Cycle Exits\n";
                return true;
            }
        }
        cout << "Cycle Doesn't Exist\n";
        return false;
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
    ll.tail->next = ll.head;
    ll.isCycle(ll.head);
    cout << endl;
    return 0;
}
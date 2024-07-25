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

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
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
            tail = newNode;
        }
    }

    void printList(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    Node *splitAtMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL;
        }
        return slow;
    }

    Node *reverse(Node *head)
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

        return prev;
    }

    Node *zigZagLL(Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *rightHead = splitAtMid(head);
        Node *rightHeadRev = reverse(rightHead);

        Node *left = head;
        Node *right = rightHeadRev;
        Node *tail = nullptr;

        while (left != NULL && right != NULL)
        {
            Node *nextLeft = left->next;
            Node *nextRight = right->next;

            left->next = right;
            if (nextLeft == NULL)
                break;
            right->next = nextLeft;

            left = nextLeft;
            right = nextRight;
        }
        return head;
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList(ll.head);
    ll.head = ll.zigZagLL(ll.head);
    ll.printList(ll.head);
    return 0;
}

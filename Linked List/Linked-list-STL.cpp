#include <bits/stdc++.h>
using namespace std;

void printList(list<int> ll)
{
    list<int>::iterator itr;
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << *itr << " --> ";
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << endl;
    list<int> ll;
    list<int>::iterator itr;
    itr = ll.begin();
    ++itr;
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    printList(ll);

    cout << ll.size() << endl;
    cout << "Head : " << ll.front() << endl;
    cout << "Tail : " << ll.back() << endl;

    ll.pop_front();
    ll.pop_back();

    printList(ll);

    itr = ll.begin();   // Reset the iterator to the beginning of the list
    ll.insert(itr, 10); // Insert 10 at the position of itr

    printList(ll);

    cout << endl;
    return 0;
}

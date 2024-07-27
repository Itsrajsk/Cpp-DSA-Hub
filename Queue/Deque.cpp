#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl;
    deque<int> dq;

    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(4);
    cout << dq.front() << " ";
    cout << dq.back() << endl;
    dq.pop_front();
    dq.pop_back();
    cout << dq.front() << " ";
    cout << dq.back() << endl;

    cout << endl;
    return 0;
}
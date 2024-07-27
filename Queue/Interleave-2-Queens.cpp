#include <bits/stdc++.h>
using namespace std;

void interleave2Queens(queue<int> &origQ)
{
    queue<int> newQ;
    int n = origQ.size() / 2;

    // Push first half elements into newQ
    for (int i = 0; i < n; i++)
    {
        newQ.push(origQ.front());
        origQ.pop();
    }

    // Interleave the elements from newQ and the remaining elements in origQ
    while (!newQ.empty())
    {
        origQ.push(newQ.front());
        newQ.pop();
        origQ.push(origQ.front());
        origQ.pop();
    }
}

int main()
{
    cout << endl;
    queue<int> origQ;
    origQ.push(1);
    origQ.push(2);
    origQ.push(3);
    origQ.push(4);
    origQ.push(5);
    origQ.push(6);
    origQ.push(7);
    origQ.push(8);
    origQ.push(9);
    origQ.push(10);

    interleave2Queens(origQ);

    while (!origQ.empty())
    {
        cout << origQ.front() << " ";
        origQ.pop();
    }
    cout << endl;
    return 0;
}

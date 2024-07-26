#include <bits/stdc++.h>
using namespace std;

void stockSpanProblem(vector<int> &stocks, vector<int> &span)
{
    stack<int> s;
    span[0] = 1;
    s.push(0);

    for (int i = 1; i < stocks.size(); i++)
    {
        int currPrice = stocks[i];
        while (!s.empty() && currPrice >= stocks[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }
        s.push(i);
    }

    for (int i = 0; i < span.size(); i++)
    {
        cout << span[i] << " ";
    }
}

int main()
{
    cout << endl;
    vector<int> stocks = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span(stocks.size());
    stockSpanProblem(stocks, span);
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int first = 0;
    int sec = 1;
    for (int i = 0; i < n; i++)
    {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }

    return 0;
}
//  0 1 1 2 3 5
#include <iostream>
using namespace std;
void Counter()
{
    static int count = 0;
    count++;
    cout << "Count = " << count << endl;
}
int main()
{
    Counter();
    Counter();
    Counter();
    return 0;
}
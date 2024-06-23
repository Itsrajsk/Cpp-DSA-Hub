#include <iostream>
using namespace std;
class print
{
public:
    void show(int num)
    {
        cout << "Number = " << num << endl;
    };
    void show(string str)
    {
        cout << "String = " << str << endl;
    };
};
int main()
{
    print obj1;
    obj1.show(5);
    obj1.show("Hello");
    return 0;
}
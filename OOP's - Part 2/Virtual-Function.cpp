#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void hello()
    {
        cout << "Parent Hello" << endl;
    }
};
class Child : public Parent
{
public:
    void hello()
    {
        cout << "Child Hello" << endl;
    }
};
int main()
{
    Child c1;
    c1.hello();
    return 0;
}
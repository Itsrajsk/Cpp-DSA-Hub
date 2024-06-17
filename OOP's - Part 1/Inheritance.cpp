#include <iostream>
using namespace std;
class Animal
{
public:
    string color;
    void eat()
    {
        cout << "Eats\n";
    }
    void breathe()
    {
        cout << "Breathes\n";
    }
};
class Fish : public Animal
{
public:
    int fins;
    void swim()
    {
        cout << "swims\n";
    }
};
int main()
{
    Fish f1;
    f1.eat();
    return 0;
}
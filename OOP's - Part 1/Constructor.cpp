#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;

public:
    // Default Constructor
    Car()
    {
        cout << "Default Parameters\n";
    }
    // Parameterized Constructor
    Car(string nameValue, string colorValue)
    {
        cout << "Parameterised Constructor" << endl;
        name = nameValue;
        color = colorValue;
    }

    void start()
    {
        cout << "Car Started" << endl;
    }

    void stop()
    {
        cout << "Car Stopped" << endl;
    }

    string getName()
    {
        return name;
    }
    string getColorvalue()
    {
        return color;
    }
};

int main()
{
    Car();
    Car X("Supra", "Black");
    cout << X.getName() << endl;
    cout << X.getColorvalue() << endl;
    // Copy Constructor
    Car X1(X);
    cout << X1.getName() << endl;
    cout << X1.getColorvalue();

    return 0;
}
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float cgpa;

    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }
};

main()
{
    Student s1;
    s1.cgpa = 9.0;
    s1.name = "Raj";
    cout << s1.name << endl;
    s1.getPercentage();
    return 0;
}
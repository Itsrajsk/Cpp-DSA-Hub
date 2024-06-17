#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    float cgpa;

public:
    // Setters
    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    // Getters
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

main()
{
    Student s1;
    s1.setName("Raj");
    cout << s1.getName() << endl;
    s1.setCgpa(9.5);
    cout << s1.getCgpa() << endl;
    return 0;
}
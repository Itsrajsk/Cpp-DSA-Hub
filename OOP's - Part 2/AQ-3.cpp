#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    string studentId;
    Student(string Name, int Age, string Roll)
    {
        name = Name;
        age = Age;
        studentId = Roll;
    }

    void displayStudentInfo()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Student Id = " << studentId << endl;
    }
};
int main()
{
    Student student("Raj", 20, "14215");
    student.displayStudentInfo();
    return 0;
}
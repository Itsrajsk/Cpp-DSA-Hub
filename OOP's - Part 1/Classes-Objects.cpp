#include <iostream>
using namespace std;

class Student
{
    string name;
    float cgpa;

    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }
};

class User
{
    int id;
    string username;
    string password;
    string bio;

    void deactivate()
    {
        cout << "deleting account\n";
    }

    void editBio(string newBio)
    {
        bio = newBio;
    }
};

main()
{
    Student s1;
    return 0;
}
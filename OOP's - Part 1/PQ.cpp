#include <iostream>
#include <string>
using namespace std;
class User
{
    int id;
    string password;

public:
    string username;
    User(int id)
    {
        this->id = id;
    }
    string setPassword(string password)
    {
        return this->password = password;
    }
    string getPassword()
    {
        return password;
    }
};
int main()
{
    User U(15);
    U.username = "raj";
    U.setPassword("Raj");
    cout << "Username = " << U.username << endl;
    cout << "Password = " << U.getPassword();
    return 0;
}
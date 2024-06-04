#include <iostream>
using namespace std;

int main()
{
    string str = "Hello World!";
    cout << str.length() << endl;
    cout << str.at(2) << endl;
    cout << str[2] << endl;
    cout << str.substr(2, 4) << endl;
    cout << str.find("llo") << endl;
    return 0;
}
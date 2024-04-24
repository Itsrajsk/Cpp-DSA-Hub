#include <iostream>
using namespace std;

int main()
{
  int Year;
  cout << "Enter A Year : " << endl;
  cin >> Year;

  if (Year % 4 == 0 || Year % 400 == 0)
  {
    cout << Year << " is a Leap Year" << endl;
  }
  else 
  {
    cout << Year << " is not a Leap Year" << endl;
  }

  return 0;
}
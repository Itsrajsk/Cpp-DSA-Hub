#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter A Number : " << endl;
  cin >> num;

  if (num == 0)
  {
    cout << "Number is Zero" << endl;
  }
  else if (num > 0)
  {
    cout << "Number is Positive" << endl;
  }
  else
  {
    cout << "Number is Negative" << endl;
  }
  return 0;
}
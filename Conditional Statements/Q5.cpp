#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter 3 Digit Number : " << endl;
  cin >> n;
  int num = n;
  int n1 = num % 10;
  num /= 10;
  int n2 = num % 10;
  num /= 10;
  int n3 = num % 10;
  num /= 10;
  int armNum = n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3;
  if (armNum == n)
  {
    cout << n << " is an Armstrong Number\n";
  }
  else
  {
    cout << n << " is not an Armstrong Number\n";
  }
  return 0;
}
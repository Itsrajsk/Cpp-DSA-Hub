#include <iostream>
using namespace std;

int main()
{
  float P, R, T;
  cout << "Enter Principal : " << endl;
  cin >> P;
  cout << "Enter Rate : " << endl;
  cin >> R;
  cout << "Enter Time : " << endl;
  cin >> T;
  float interest = ((P * R * T) / 100);
  cout << "Simple Interest : " << interest;
  return 0;
}
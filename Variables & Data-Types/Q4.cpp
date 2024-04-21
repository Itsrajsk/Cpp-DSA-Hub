#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
  float r;
  cout << "Enter Radius : " << endl;
  cin >> r;
  float area = PI * r * r;
  cout << "Area Of Circle : " << area;
  return 0;
}
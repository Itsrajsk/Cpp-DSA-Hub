#include <iostream>
using namespace std;

int main()
{
  float pencil;
  float pen;
  float eraser;
  cout << "Enter Cost Of Pencil : " << endl;
  cin >> pencil;
  cout << "Enter Cost Of Pen : " << endl;
  cin >> pen;
  cout << "Enter Cost Of Eraser : " << endl;
  cin >> eraser;
  float bill = pencil + pen + eraser;
  float gst = bill * 0.18;
  cout << "Bill : " << bill << endl;
  cout << "Bill With 18% GST : " << bill+gst << endl;
  return 0;
}
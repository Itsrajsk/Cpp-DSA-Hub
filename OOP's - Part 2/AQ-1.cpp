#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void showNum()
    {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator-(Complex &c2)
    {
        int resReal = c2.real - this->real;
        int resImg = c2.img - this->img;
        Complex c3(resReal, resImg);
        return c3;
    }
};
int main()
{
    Complex c1(1, 2);
    Complex c2(2, 3);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 - c2;
    c3.showNum();
    return 0;
}
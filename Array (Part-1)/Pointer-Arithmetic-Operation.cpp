#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    // 1. Increment And Decrement Operators

    // cout << "Before Operation ptr1 Address : " << ptr << endl;
    // ptr++;
    // cout << "ptr1 Address After ptr++: " << ptr << endl;
    // ptr--;
    // cout << "ptr1 Address After ptr--: " << ptr << endl;
    // ++ptr;
    // cout << "ptr1 Address After ++ptr: " << ptr << endl;
    // --ptr;
    // cout << "ptr1 Address After --ptr: " << ptr << endl;

    // 2. Addition & Subtraction of constants

    // cout << "ptr current address : " << ptr << endl;
    // ptr = ptr + 3;
    // cout << "ptr address after ptr + 3 : " << ptr << endl;
    // ptr = ptr - 3;
    // cout << "ptr address after ptr - 3 : " << ptr << endl;

    // 3. Addition & Subtraction of pointers

    // int *ptr1, *ptr2;
    // int arr[] = {1, 2, 3, 4, 5};
    // ptr1 = arr;
    // ptr2 = ptr1 + 3;

    // Invalid Operation
    // cout<<ptr1+ptr2<<endl; We Cant Add Two Addresses

    // cout << "ptr1 : " << ptr1 << endl;
    // cout << "ptr2 : " << ptr2 << endl;
    // cout << "ptr2 - ptr1 : " << ptr2 - ptr1 << endl;

    // 4. Comparison Operators

    int *ptr1, *ptr2;
    cout << "ptr1 : " << ptr1 << endl;
    cout << "ptr2 : " << ptr2 << endl;
    cout << "ptr1 == ptr2 : " << (ptr1 == ptr2) << endl;
    cout << "ptr1 > ptr2 : " << (ptr1 > ptr2) << endl;
    cout << "ptr1 < ptr2 : " << (ptr1 < ptr2) << endl;
    cout << "ptr1 <= ptr2 : " << (ptr1 <= ptr2) << endl;
    cout << "ptr1 >= ptr2 : " << (ptr1 >= ptr2) << endl;

    return 0;
}
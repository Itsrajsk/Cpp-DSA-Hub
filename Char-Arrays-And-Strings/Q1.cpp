#include <iostream>
using namespace std;
int countVowels(string str)
{
    int count = 0;
    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    cout << "Count Of Vowels = " << count << endl;
    return count;
}
int main()
{
    string str = "aeiou";
    countVowels(str);
    return 0;
}
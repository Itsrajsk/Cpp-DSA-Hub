#include <iostream>
#include <string>
using namespace std;

// Recursive function to generate substrings and count those with same first and last character
void generateSubstringsAndCount(const string &str, int start, int end, int &count)
{
    // Base case: if end exceeds string length or start exceeds end, return
    if (start >= str.length() || end >= str.length() || start > end)
    {
        return;
    }

    // Print current substring
    cout << str.substr(start, end - start + 1) << endl;

    // Check if the first and last characters are the same
    if (str[start] == str[end])
    {
        count++;
    }

    // Recursively generate next substring by increasing the end index
    generateSubstringsAndCount(str, start, end + 1, count);

    // Move start to the next position and reset end to start
    if (end == str.length() - 1)
    {
        generateSubstringsAndCount(str, start + 1, start + 1, count);
    }
}

int main()
{
    string str = "aba";
    int count = 0;
    generateSubstringsAndCount(str, 0, 0, count);
    cout << "Count of substrings where first and last characters are the same: " << count << endl;
    return 0;
}

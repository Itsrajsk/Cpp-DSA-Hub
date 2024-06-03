#include <iostream>
using namespace std;
void search(int mat[][3], int n, int m, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == key)
            {
                count++;
            }
        }
    }
    cout << key << " Occured " << count << " times" << endl;
}
int main()
{
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    search(arr, 2, 3, 7);
    return 0;
}
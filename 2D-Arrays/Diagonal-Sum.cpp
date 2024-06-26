#include <iostream>
using namespace std;
int diagonalSum(int mat[][4], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }
    cout << "Diagonal Sum = " << sum << endl;
    return sum;
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    diagonalSum(arr, 4);
    return 0;
}
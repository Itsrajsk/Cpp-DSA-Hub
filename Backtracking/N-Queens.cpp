#include <bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<char>> &board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------\n";
}

bool isSafe(vector<vector<char>> &board, int row, int col)
{
    int n = board.size();
    // Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }
    // Vertical
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    // Diagonal Left
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // Diagonal Right
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}

bool nQueens(vector<vector<char>> &board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return true;
    }
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
            if (nQueens(board, row + 1))
            {
                return true; // Stop after finding the first solution
            }
            board[row][j] = '.';
        }
    }
    return false;
}

int main()
{
    cout << endl;
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    nQueens(board, 0);
    cout << endl;
    return 0;
}

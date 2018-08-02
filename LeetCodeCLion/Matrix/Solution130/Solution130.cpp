
#include <iostream>
#include "Solution130.h"

void Depth(vector<vector<char >>& matrix, int r, int c)
{
    if (matrix[r][c] == 'O')
        matrix[r][c] = '*';
    if (r - 1 >= 0 && matrix[r-1][c] == 'O')
        Depth(matrix, r - 1, c);
    if (c - 1 >= 0 && matrix[r][c-1] == 'O')
        Depth(matrix, r, c - 1);
    if (r + 1 < matrix.size() && matrix[r+1][c] == 'O')
        Depth(matrix, r + 1, c);
    if (c + 1 < matrix[0].size() && matrix[r][c+1] == 'O')
        Depth(matrix, r, c + 1);
}

void Solution130::solve(vector<vector<char>> &board)
{
    if (board.size() == 0 || board[0].size() == 0)
        return;
    int h = board.size();
    int w = board[0].size();
    int top = 0;
    int bottom = h - 1;
    int left = 0;
    int right = w - 1;
    for (int i = 0; i < w; ++i)
    {
        if (board[top][i] == 'O')
            Depth(board, top, i);
        if (board[bottom][i] == 'O')
            Depth(board, bottom, i);
    }
    for (int i = 0; i < h; ++i)
    {
        if (board[i][left] == 'O')
            Depth(board, i, left);
        if (board[i][right] == 'O')
            Depth(board, i, right);
    }
    for (int r = 0; r < h; ++r)
    {
        for (int c = 0; c < w; ++c)
        {
            if(board[r][c] == 'O')
                board[r][c] = 'X';
            if(board[r][c] == '*')
                board[r][c] = 'O';
        }
    }
}
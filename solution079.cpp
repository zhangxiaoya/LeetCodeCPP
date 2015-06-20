#include "solution079.h"

Solution079::Solution079()
{
}
bool Solution079::exist(vector<vector<char> > &board, string word)
{
    const int row = board.size();
    const int col = board[0].size();

    vector< vector<bool> > visited(row,vector<bool>(col,false));
    for(int i =0;i<row;i++)
        for(int j=0;j<col;++j)
            if(mmdfs(board,word,0,i,j,visited))
                return true;
    return false;
}

bool Solution079::mmdfs(const vector<vector<char> > &board, const string &word, int index, int x, int y, vector<vector<bool> > &visited)
{
    if(index == word.size())
        return true;
    if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size())
        return false;
    if(visited[x][y])
            return false;
    if(board[x][y] != word[index])
        return false;
    visited[x][y] = true;
    bool res = mmdfs(board,word,index+1,x-1,y,visited) ||
            mmdfs(board,word,index+1,x+1,y,visited) ||
            mmdfs(board,word,index+1,x,y-1,visited) ||
            mmdfs(board,word,index+1,x,y+1,visited);
    visited[x][y] = false;
    return res;
}

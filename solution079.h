#ifndef SOLUTION079_H
#define SOLUTION079_H
#include <vector>
#include <string>
using namespace std;
class Solution079
{
public:
    Solution079();
    bool exist(vector<vector<char>>& board, string word);
private:
    bool mmdfs(const vector< vector<char> > &board,const string &word,int index,int x,int y,vector< vector<bool> > &visited);
};

#endif // SOLUTION079_H

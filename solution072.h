#ifndef SOLUTION072_H
#define SOLUTION072_H

#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution072
{
private:
    int min(int a,int b){return a>b?b:a;}
public:
    Solution072();
    int minDistance(string word1, string word2);
};

#endif // SOLUTION072_H

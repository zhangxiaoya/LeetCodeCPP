#ifndef SOLUTION022_H
#define SOLUTION022_H

#include <vector>
#include <list>
#include <string>

using std::string;
using std::list;
using std::vector;

class Solution022
{
    void generateOneByOne(string sublist,vector<string>& list,int left,int right);
public:
    Solution022();
    vector<string> generateParenthesis(int n);
};

#endif // SOLUTION022_H

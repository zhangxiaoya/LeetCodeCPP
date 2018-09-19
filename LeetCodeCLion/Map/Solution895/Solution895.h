
#ifndef LEETCODECLION_SOLUTION895_H
#define LEETCODECLION_SOLUTION895_H

#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;

class Solution895
{
    unordered_map<int,int> frequency;
    vector<int> s;

public:
    Solution895();

    void push(int x);

    int pop();
};


#endif //LEETCODECLION_SOLUTION895_H

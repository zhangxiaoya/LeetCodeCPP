//
// Created by runisys on 18-6-28.
//

#include "Solution017.h"

string Solution017::vectorToStr(vector<char> &v)
{
    string s;
    for (auto c: v)
    {
        s.push_back(c);
    }
    return s;
}

void Solution017::help(vector<char> &s, int idx, vector<int> nums, vector<string> &res)
{
    if (idx == nums.size())
    {
        res.push_back(vectorToStr(s));
        return;
    }
    string curs = dict.at(nums[idx]);
    for (int i = 0; i < curs.length(); ++i)
    {
        s.push_back(curs[i]);
        help(s, idx + 1, nums, res);
        s.pop_back();
    }
}

vector<string> Solution017::letterCombinations(string digits)
{

    vector<char> s;
    vector<string> res;
    vector<int> nums;
    if (digits.length() == 0)
        return res;
    for (auto c : digits)
    {
        char n = c - '0';
        if(n >1 && n <10)
            nums.push_back(n);
    }
    help(s, 0, nums, res);
    return res;
}
//
// Created by runisys on 18-6-28.
//

#ifndef LEETCODECLION_SOLUTION017_H
#define LEETCODECLION_SOLUTION017_H

#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

class Solution017
{
public:
    const map<int, string> dict = {
            {0, ""},
            {1, ""},
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}};

    void help(vector<char> &s, int idx, vector<int> nums, vector<string>& res);

    string vectorToStr(vector<char> &v);

public:
    vector<string> letterCombinations(string digits);
};


#endif //LEETCODECLION_SOLUTION017_H

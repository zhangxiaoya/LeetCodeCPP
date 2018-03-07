//
// Created by ynzha on 2018/3/7.
//

#ifndef LEETCODECLION_SOLUTION784_H
#define LEETCODECLION_SOLUTION784_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution784 {
private:
    bool isLetter(char c);

    bool isUpperCase(char c);

    bool isLowerCase(char c);

    void changeCase(string& str, int i);

public:
    vector<string> letterCasePermutation(string S);
};


#endif //LEETCODECLION_SOLUTION784_H

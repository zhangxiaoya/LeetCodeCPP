//
// Created by ynzha on 2018/3/7.
//

#include "Solution784.h"

bool Solution784::isLetter(char c)
{
    return   isLowerCase(c) || isUpperCase(c);
}
vector<string> Solution784::letterCasePermutation(string S)
{
    vector<string> result;
    result.push_back(S);

    for(int i = 0; i< S.size(); ++i)
    {
        if(isLetter(S[i]))
        {
            int oldLen = result.size();
            for(int j = 0; j < oldLen; ++j)
            {
                string temp = result[j];
                changeCase(temp, i);
                result.push_back(temp);
            }
        }
    }
    return result;
}

bool Solution784::isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool Solution784::isLowerCase(char c) {
    return (c >= 'a' && c <= 'z');
}

void Solution784::changeCase(string &str, int i) {
    if(isUpperCase(str[i]))
        str[i] = tolower(str[i]);
    else
        str[i] = toupper(str[i]);
}

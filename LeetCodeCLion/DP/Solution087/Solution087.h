
#ifndef LEETCODECLION_SOLUTION087_H
#define LEETCODECLION_SOLUTION087_H

#include <string>
#include <unordered_map>
using std::string;
using std:: unordered_map;

class Solution087
{
private:
    bool help(string s1, string s2, unordered_map<string, bool>& dp);
public:
    bool isScramble(string s1, string s2);
};


#endif //LEETCODECLION_SOLUTION087_H

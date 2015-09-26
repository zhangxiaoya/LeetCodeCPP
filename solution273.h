#ifndef SOLUTION273_H
#define SOLUTION273_H

#include <string>
#include <map>
using std::string;
using std::map;
using namespace std;

class Solution273
{
private:
    map<int,string> hash;
    string toString(int n,string unit);
public:
    Solution273();
    string numberToWords(int num) ;
};

#endif // SOLUTION273_H

#include "solution013.h"

Solution013::Solution013()
{

}

int Solution013::romanToInt(std::string s)
{
    hash_map<char,int> hash;
//    map<char,int> hash;
    hash.insert(std::make_pair('I',1));
    hash.insert(std::make_pair('V',5));
    hash.insert(std::make_pair('X',10));
    hash.insert(std::make_pair('L',50));
    hash.insert(std::make_pair('C',100));
    hash.insert(std::make_pair('D',500));
    hash.insert(std::make_pair('M',1000));

    int res = 0;
    int pivot = 0;
    for(int i =s.length()-1;i>=0;--i)
    {
        int cur = hash[s[i]];
        if(cur >= pivot)
            res += cur;
        else
            res -= cur;
        pivot = cur;
    }
    return res;

}

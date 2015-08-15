#include "solution242.h"

Solution242::Solution242()
{

}

bool Solution242::isAnagram(string s, string t)
{
    if(s.length() != t.length())
        return false;
    using std::map;
    map<char,int> nums,numt;
    for(int i=0;i<s.length();++i)
        nums[s[i]] ++;
    for(int i=0;i<t.length();++i)
        numt[t[i]] ++;

    if(nums.size() != numt.size())
        return false;
    map<char,int>::iterator itt = numt.begin();
    map<char,int>::iterator its = nums.begin();
    for(;itt != numt.end() && its != nums.end();++its,++itt )
        if(itt->first != its->first || itt->second != its->second)
            return false;
    return true;
}

#include "solution151.h"

Solution151::Solution151()
{

}
void Solution151::trim(std::string &s)
{
    string::iterator it1,it2;
    it1 = s.begin();
    it2 = s.begin();
    while(it2!= s.end())
    {
        if(*it2 == ' ')
        {
            while(it2+1 != s.end() && *it2 == *(it2+1))
                it2 ++;
        }
        *it1 = *it2;
        it1++;
        it2++;
    }
    if(*(it1-1) == ' ')
        it1 --;
    s.erase(it1,it2);
    it1 = s.begin();
    while(*it1 == ' ')
        it1++;
    s.erase(s.begin(),it1);
}

void Solution151::reverseWords(string &s)
{
    if(s.length() == 0)
        return;
    trim(s);
    std::reverse(s.begin(),s.end());

    int beg = 0;
    int end = 0;
    while(end < s.length())
    {
        while(end < s.length() && s[end] != ' ')
            end++;
//        if(end == beg+1)
//            break;
        std::reverse(s.begin()+beg,s.begin()+end);
        end ++;
        beg = end;
    }
}

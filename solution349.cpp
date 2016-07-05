#include "solution349.h"

Solution349::Solution349()
{

}

vector<int> Solution349::intersection(vector<int> &nums1, vector<int> &nums2)
{
    map<int,int> dict;
    vector<int> res;
    for(vector<int>::iterator it = nums1.begin();it != nums1.end();++it)
    {
        dict.insert(std::make_pair(*it,0));
    }
    for(vector<int>::iterator it = nums2.begin();it != nums2.end();++it)
    {
        if(dict.find(*it) != dict.end())
            dict[*it] ++;
    }
    for(map<int,int>::iterator it = dict.begin();it != dict.end();++it)
        if(it->second >0)
            res.push_back(it->first);
    return res;
}

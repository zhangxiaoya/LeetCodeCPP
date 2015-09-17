#include "solution049.h"

Solution049::Solution049()
{

}

vector<vector<string> > Solution049::groupAnagrams(vector<std::string> &strs)
{
    vector<vector<string> > res;
    if(strs.empty())
        return res;
    map<string,int> hash;
    string t;
    for(int i = 0;i< strs.size();++i)
    {
        t = strs[i];
        std::sort(t.begin(),t.end());
        if(hash.find(t) != hash.end())
        {
            hash.insert(make_pair(t,res.size()));
            res.push_back(vector<string>(1,strs[i]));
        }
        else
            res[hash.find(t)->second].push_back(strs[i]);
    }
    for(int i=0;i<res.size();++i)
        std::sort(res[i].begin(),res[i].end());
    return res;
}

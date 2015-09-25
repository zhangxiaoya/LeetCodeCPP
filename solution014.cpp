#include "solution014.h"

Solution014::Solution014()
{

}

string Solution014::longestCommonPrefix(vector<std::string> &strs)
{
    if(strs.empty())
        return "";
    string res ="";
    for(int i =0;;++i)
    {

        for(int j=0;j<strs.size();++j)
        {
            if(i >= strs[j].size() || (j>0 &&strs[j][i] != strs[j-1][i]))
                return res;
        }
        res.push_back(strs[0][i]);
    }
}

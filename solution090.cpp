#include "solution090.h"
#include <algorithm>

Solution090::Solution090()
{

}

vector<vector<int>> Solution090::subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
    vector<int> path;

    subsets(nums,path,nums.begin(),result);
    return result;
}
void Solution090::subsets(const vector<int> &S, vector<int> path, vector<int>::iterator beg, vector<vector<int> > &result)
{
    result.push_back(path);
    for(auto i = beg;i!= S.end();++i)
    {
        if(i!= beg && *i == *(i-1))
            continue;
        path.push_back(*i);
        subsets(S,path,i+1,result);
        path.pop_back();
    }
}

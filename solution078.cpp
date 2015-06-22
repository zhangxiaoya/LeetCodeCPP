#include "solution078.h"
#include <algorithm>

Solution078::Solution078()
{

}

vector< vector<int> > Solution078::subsets(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
    vector<int> path;
    subsets(nums,path,0,result);
    return result;
}
void Solution078::subsets(const vector<int> &S, vector<int> &path, int step, vector<vector<int> > &result)
{
    if(step == S.size())
    {
        result.push_back(path);
        return;
    }
    subsets(S,path,step+1,result);
    path.push_back(S[step]);
    subsets(S,path,step+1,result);
    path.pop_back();
}

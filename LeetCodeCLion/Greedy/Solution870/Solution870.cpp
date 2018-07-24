
#include "Solution870.h"
#include <set>
using std::multiset;

vector<int> Solution870::advantageCount(vector<int> &A, vector<int> &B)
{
    multiset<int> CA(A.begin(), A.end());
    vector<int> res;
    for(auto b : B)
    {
        const multiset<int, std::less<int>, std::allocator<int>>::iterator &it = CA.upper_bound(b);
        if(it != CA.end())
        {
            res.push_back(*it);
            CA.erase(it);
        }
        else
        {
            res.push_back(*CA.begin());
            CA.erase(CA.begin());
        }
    }
    return res;
}
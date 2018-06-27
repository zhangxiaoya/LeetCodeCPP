//
// Created by runisys on 18-6-27.
//

#include "Solution859.h"
#include <set>
#include <vector>

using std::set;
using std::vector;

bool Solution859::buddyStrings(string A, string B)
{
    if(A.length() != B.length()|| A.length() == 0)
        return false;
    if(A == B)
        return set<char >(A.begin(), A.end()).size() < A.length();
    vector<int> diffIdx;
    for(auto i = 0; i< A.length();++i)
        if(A[i] != B[i])
            diffIdx.push_back(i);
    return diffIdx.size() ==2 && A[diffIdx[0]] == B[diffIdx[1]] && A[diffIdx[1]] == B[diffIdx[0]];
}
//
// Created by XiaoyaZhang on 2018/3/11.
//

#include "Solution795.h"

int Solution795::numSubarrayBoundedMax(vector<int> &A, int L, int R)
{
    int result = 0;
    int countSmallerThanL = 0;
    int countSmallerThanR = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        if(A[i] > R)
        {
            result += (countSmallerThanR * (countSmallerThanR + 1) / 2);
            countSmallerThanR = 0;
        }
        else
        {
            countSmallerThanR ++;
        }
    }
    result += (countSmallerThanR * (countSmallerThanR + 1) / 2);
    for(int i = 0; i< A.size();++i)
    {
        if(A[i] >= L)
        {
            result -= (countSmallerThanL * (countSmallerThanL + 1) / 2);
            countSmallerThanL = 0;
        }
        else
        {
            countSmallerThanL ++;
        }
    }
    result -= (countSmallerThanL * (countSmallerThanL + 1) / 2);
    return result;
}

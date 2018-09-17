
#include "Solution905.h"

vector<int> Solution905::sortArrayByParity(vector<int> &A)
{
    if(A.size() > 1)
    {
        int beg = 0;
        int end = A.size() -1;
        while (beg < end)
        {
            while (beg < end && A[beg] % 2 == 0) beg++;
            while(beg < end && A[end] %2 == 1) end --;
            if(beg < end)
                std::swap(A[beg], A[end]);
        }
    }
    return A;
}
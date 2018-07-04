
#include "Solution413.h"

int Solution413::numberOfArithmeticSlices(vector<int> &A)
{
    if (A.size() < 3)
        return 0;
    vector<int> increament(A.size(),0);
    int count = 0;
    for (int i = 2; i < A.size(); ++i)
    {
        if(A[i] - A[i-1] == A[i-1] - A[i-2])
            increament[i] = increament[i-1] + 1;
        count += increament[i];
    }
    return count;
}
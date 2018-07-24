//
// Created by runisys on 18-7-18.
//

#include <cstring>
#include "Solution869.h"

void Solution869::Counter(int n, int A[])
{
    memset(A, 0, sizeof(int) * 10);
    while (n > 0)
    {
        A[n % 10]++;
        n /= 10;
    }
}

bool Solution869::reorderedPowerOf2(int N)
{
    int A[10] = {0};
    int B[10] = {0};
    Counter(N, A);
    for (int i = 0; i < 32; ++i)
    {
        int n = 1 << i;
        Counter(n, B);
        bool f = true;
        for (int j = 0; j < 10; ++j)
        {
            if (A[j] != B[j])
            {
                f = false;
                break;
            }
        }
        if (f == true)
            return f;
    }
    return false;
}
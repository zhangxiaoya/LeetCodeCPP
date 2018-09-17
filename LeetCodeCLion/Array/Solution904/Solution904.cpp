
#include "Solution904.h"

int Solution904::totalFruit(vector<int> &tree)
{
    int maxRes = 0;
    if (tree.size() > 0)
    {
        int a = 0;
        int b = 0;
        int lenB = 0;
        int cur = 0;
        for (int i = 0; i < tree.size(); ++i)
        {
            if (a == tree[i])
            {
                cur++;
                a = b;
                b = tree[i];
                lenB = 1;
            } else if (b == tree[i])
            {
                lenB++;
                cur++;
            } else
            {
                cur = lenB + 1;
                lenB = 1;
                a = b;
                b = tree[i];
            }
            maxRes = std::max(cur, maxRes);
        }
    }
    return maxRes;
}

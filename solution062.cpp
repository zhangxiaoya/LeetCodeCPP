#include "solution062.h"
#include <vector>

using namespace std;

Solution062::Solution062()
{

}
int Solution062::uniquePaths(int m, int n)
{
    vector<int> f(n,0);
    f[0] = 1;
    for(int i =0;i<m;++i)
    {
        for(int j = 1;j <n;++j)
        {
            f[j] = f[j-1] + f[j];
        }
    }
    return f[n-1];
    /*
    if(m < 1 || n < 1)
        return 0;
    if(m == 1 && n == 1)
        return 1;
    return uniquePaths(m-1,n) + uniquePaths(m,n-1);
    */
}

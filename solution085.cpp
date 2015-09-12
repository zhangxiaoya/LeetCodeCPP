#include "solution085.h"

Solution085::Solution085()
{
}

int Solution085::maximalRectangle(vector<vector<char> > &matrix)
{
    if(matrix.size() == 0)
        return 0;
    const int m = matrix.size();
    const int n = matrix[0].size();
    int left[n];
    int right[n];
    int height[n];
    std::fill_n(left,n,0);
    std::fill_n(right,n,n);
    std::fill_n(height,n,0);
    int maxArea = 0;
    for(int i=0;i<m;i++)
    {
        int curleft = 0;
        int curright = n;
        for(int j=0;j<n;++j)
        {
            if(matrix[i][j] == '1')
                height[j]++;
            else
                height[j] = 0;
        }
        for(int j=0;j<n;++j)
        {
            if(matrix[i][j] =='1')
                left[j]= max(left[j],curleft);
            else
            {
                left[j] = 0;
                curleft = j+1;
            }
        }
        for(int j=n-1;j>=0;--j)
        {
            if(matrix[i][j] == '1')
                right[j] = min(right[j],curright);
            else
            {
                right[j] = n;
                curright = j;
            }
        }
        for(int j=0;j<n;++j)
            maxArea = max(maxArea,(right[j]-left[j])*height[j]);
    }
    return maxArea;
}

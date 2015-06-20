#include "solution088.h"

Solution088::Solution088()
{
}

void Solution088::merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    if( n== 0)
        return;
    if(m == 0)
    {
        for(int i = 0;i<n;++i)
            nums1[i] = nums2[i];
        return;
    }
    int e1 = m-1;
    int e2 = n-1;
    int e = m+n-1;
    while( e1 >= 0 && e2 >=0)
    {
        if(nums1[e1] > nums2[e2])
            nums1[e--] = nums1[e1--];
        else
            nums1[e--] = nums2[e2--];
    }
    while( e2>= 0)
        nums1[e--] = nums2[e2--];
}

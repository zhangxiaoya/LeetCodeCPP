#include "solution004.h"

Solution004::Solution004()
{

}

int Solution004::min(int a,int b)
{
    return a<b?a:b;
}
int Solution004::max(int a,int b)
{
    return a>b?a:b;
}

double Solution004::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int len1 = nums1.size();
    int len2 = nums2.size();
    if(len1 > len2)
        return findMedianSortedArrays(nums2,nums1);
    int mini,maxi;
    int i,j;
    int mid;
    int n1,n2;
    mini = 0; maxi = len1;   // 0 - m , total (m+1) split point
    mid = (len1 + len2 + 1) /2;

    while(mini <= maxi)      // Binary search
    {
        i = (mini + maxi) /2;
        j = mid - i;
        if(i > 0 && j < len2 && nums1[i-1] > nums2[j])
            maxi = i -1;
        else if(j > 0 && i < len1  && nums2[j-1] > nums1[i])
            mini = i + 1;
        else
            break;
    }
    if(i == 0)
        n1 = nums2[j-1];
    else if( j == 0)
        n1 = nums1[i-1];
    else
        n1 = max(nums1[i-1],nums2[j-1]);
    if((len1 + len2)& 1)
        return n1;

    if(i == len1)
        n2 = nums2[j];
    else if(j == len2)
        n2 = nums1[i];
    else
        n2 = min(nums1[i],nums2[j]);
    return (n1 + n2) / 2.0;

    /*****************************************************************/
//    int len1,len2;
//    len1 = nums1.size();
//    len2 = nums2.size();
//    if(len1 > len2)
//        return findMedianSortedArrays(nums2,nums1);
//    int i,j;
//    int mid;
//    int min_i,max_i;
//    int n1,n2;
//    min_i = 0;
//    max_i = len1;
//    mid = (len1 + len2 + 1) / 2;
//    while(min_i <= max_i)
//    {
//        i = (min_i + max_i) / 2;
//        j = mid - i;
//        if(i >0 && j<len2 && nums1[i-1] > nums2[j])
//            max_i = i -1;
//        else if(j>0 && i<len1 && nums2[j-1] > nums1[i])
//            min_i = i + 1;
//        else
//            break;
//    }

//    if(i == 0)
//        n1 = nums2[j-1];
//    else if(j==0)
//        n1 = nums1[i-1];
//    else
//        n1 = max(nums1[i-1],nums2[j-1]);

//    if((len1 + len2) & 1)
//        return n1;
//    if(i == len1)
//        n2 = nums2[j];
//    else if(j == len2)
//        n2 = nums1[i];
//    else
//        n2 = min(nums1[i],nums2[j]);
//    return (n1 + n2) / 2.0;
}

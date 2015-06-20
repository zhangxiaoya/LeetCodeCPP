#include "solution169.h"

Solution169::Solution169()
{
}
int Solution169::majorityElement(vector<int> &nums)
{
    int len = nums.size();
    int half = len / 2;
    int bitcount[32];
    for(int i =0;i<32;++i)
        bitcount[i] = 0;
    for(int i = 0;i<len;++i)
    {
        int t = nums[i];
        for(int j = 0;j< 32;++j)
        {
            if(t % 2)
                bitcount[j] ++;
            t >>= 1;
        }
    }
    int ans = 0;
    for(int i = 32;i>= 0;--i)
    {
        ans <<= 1;
        if(bitcount[i]> half)
            ans += 1;
    }
    return ans;
//    int count = 0;
//    int len = nums.size();
//    for(int i =0;i<len/2;++i)
//    {
//       count = 0;
//       for(int j = i;j<len;++j)
//       {
//           if(nums[i] == nums[j])
//           {
//               if(++count > (len /2))
//                   return nums[i];
//           }
//       }
//    }
//    return -1;
}

class Solution {
public:
    int rob(vector<int>& nums) {
        int last1 = 0;
        int last2 = nums[0];
        for(int i = 2; i<= nums.size(); ++i) {
            int cur = max(last2, last1 + nums[i-1]);
            last1 = last2;
            last2 = cur;
        }
        return last2;
    }
};
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size() + 1, 0);
//         dp[1] = nums[0];
//         for(int i = 2; i<= nums.size(); ++i) {
//             dp[i] = max(dp[i-1], dp[i-2] + nums[i-1]);
//         }
//         return dp[nums.size()];
//     }
// };

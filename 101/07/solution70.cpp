class Solution {
public:
    int climbStairs(int n) {
        int last1 = 1;
        int last2 = 1;
        for(int i = 2; i<=n; ++ i) {
            int cur = last1 + last2;
            last1 = last2;
            last2 = cur;
        }
        return last2;
    }
};
// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n + 1, 1);
//         for(int i = 2; i<=n; ++ i) {
//             dp[i] = dp[i-1] + dp[i-2];
//         }
//         return dp[n];
//     }
// };

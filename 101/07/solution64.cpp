class Solution {
    public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> dp(n, 0);
        for(int i = 0; i< m; ++i) {
            for(int j =0; j < n; ++j) {
                if(i == 0 && j ==0) {
                    dp[j] = grid[i][j];
                } else if(i == 0) {
                    dp[j] = dp[j-1] + grid[i][j];
                } else if(j == 0) {
                    dp[j] = dp[j] + grid[i][j];
                } else {
                    dp[j] = min(dp[j], dp[j-1]) + grid[i][j];
                }
            }
        }
        return dp[n-1];
    }
};
// class Solution {
//     public:
//         int minPathSum(vector<vector<int>>& grid) {
//             int m = grid.size();
//             int n = grid[0].size();
//             vector<vector<int>> dp(m, vector<int>(n, 0));
//             dp[0][0] = grid[0][0];
//             for(int i = 1; i< n; ++i) {
//                 dp[0][i] = dp[0][i-1] + grid[0][i];
//             }
//             for(int j = 1; j < m; ++ j) {
//                 dp[j][0] = dp[j-1][0] + grid[j][0];
//             }
//             for(int i = 1; i < m; ++i) {
//                 for(int j = 1; j < n; ++j) {
//                     dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
//                 }
//             }
//             return dp[m-1][n-1];
//         }
//     };

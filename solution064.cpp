#include "solution064.h"

Solution064::Solution064()
{
}

int Solution064::minPathSum(vector<vector<int> > &grid){
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int> > dp(m, vector<int>(n));

    for( int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(i==0 && j==0){
                dp[i][j] =  grid[i][j];
            }
            else if(i ==0){
                dp[i][j] = dp[i][j-1] + grid[i][j];
            }
            else if(j ==0){
                dp[i][j] = dp[i-1][j] + grid[i][j];
            }
            else{
                dp[i][j] = min(dp[i][j-1] , dp[i-1][j]) + grid[i][j];
            }
        }
    }
    return dp[m-1][n-1];
}

#include "solution064.h"

Solution064::Solution064()
{
}

int Solution064::minPathSum(vector<vector<int> > &grid){
    int m = grid.size();
    int n = grid[0].size();
    vector<int> dp(n);

    for( int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(i==0 && j==0){
                dp[j] =  grid[i][j];
            }
            else if(i ==0){
                dp[j] = dp[j-1] + grid[i][j];
            }
            else if(j ==0){
                dp[j] = dp[j] + grid[i][j];
            }
            else{
                dp[j] = min(dp[j-1] , dp[j]) + grid[i][j];
            }
        }
    }
    return dp[n-1];
}

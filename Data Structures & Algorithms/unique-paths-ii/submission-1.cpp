class Solution {
public:
    vector<vector<int>>dp;
    int m,n;
    int solve(vector<vector<int>>& grid,int i,int j){
        if(i==m-1&&j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];

        int a =0,b=0;
        if(grid[i][j]==0){
            if(i<m-1) a =solve(grid,i+1,j);
            if(j<n-1) b = solve(grid,i,j+1); 
        }
        return dp[i][j] = a+b;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        dp.resize(m,vector<int>(n,-1));
        this->n = n;
        this->m = m;
        if(obstacleGrid[m-1][n-1]==1) return 0;
        return solve(obstacleGrid,0,0);
    }
};
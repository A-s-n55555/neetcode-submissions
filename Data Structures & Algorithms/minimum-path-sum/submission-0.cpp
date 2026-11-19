class Solution {
public:
    vector<vector<int>> dp;
    int m, n;
    int solve(vector<vector<int>>&grid, int i, int j) {
        if (i == m-1 && j == n-1) return grid[m-1][n-1];
        if (dp[i][j] != -1) return dp[i][j];
        int a =INT_MAX,b= INT_MAX;
        if (j<n-1) a = solve(grid,i, j+1) + grid[i][j];
        if (i<m-1) b = solve(grid,i+1, j) + grid[i][j];

        return dp[i][j] = min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {

        this->m = grid.size();
        this->n = grid[0].size();
        dp.resize(m, vector<int>(n, -1));

        return solve(grid,0, 0);
    }
};

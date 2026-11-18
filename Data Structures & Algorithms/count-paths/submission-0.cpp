
class Solution {
public:
    vector<vector<int>> dp;
    int m, n;
    int solve(int i, int j) {
        if (i == m-1 && j == n-1) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        int a =0,b= 0;
        if (j<n-1) a = solve(i, j+1);
        if (i<m-1) b = solve(i+1, j);

        return dp[i][j] = a + b;
    }

    int uniquePaths(int m, int n) {
        this->m = m;
        this->n = n;
        dp.resize(m, vector<int>(n, -1));

        return solve(0, 0);
    }
};

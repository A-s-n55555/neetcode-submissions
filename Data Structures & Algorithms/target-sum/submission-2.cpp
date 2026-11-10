class Solution {
public:
    int tar, n, sum;

    int solve(vector<int>& nums, int target, int i,vector<vector<int>>& dp) {
        if (i == n) return target == tar;
        if (dp[i][target + sum] != INT_MIN)
            return dp[i][target + sum];

        int a = solve(nums, target - nums[i], i + 1, dp);
        int b = solve(nums, target + nums[i], i + 1, dp);

        return dp[i][target + sum] = a + b;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        n = nums.size();
        tar = target;
        sum = 0;
        for (int x : nums) sum += x;
        if (tar < -sum || tar > sum) return 0;

        vector<vector<int>> dp(n + 1, vector<int>(2 * sum + 1, INT_MIN));

        return solve(nums, 0, 0, dp);
    }
};
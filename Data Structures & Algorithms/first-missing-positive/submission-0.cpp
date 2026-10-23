class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        for (int x : nums) {
            if (x >= 1 && x <= n)
                ans[x - 1] = -1;
        }
        for (int i = 0; i < n; i++) {
            if (ans[i] != -1)
                return i + 1;
        }
        return n + 1;
    }
};
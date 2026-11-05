class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mex = 0;
        for(int i = 0; i < n; i++) {
            if(i > mex) return 0;
            mex = max(mex, i + nums[i]);
            if(mex >= n - 1) return 1;
        }

        return 0;
    }
};
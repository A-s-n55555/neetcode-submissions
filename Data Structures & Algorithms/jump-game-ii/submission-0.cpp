class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> step(n,0);
        for(int i=n-2;i>-1;i--){
            int steps = n-1-i;
            if(nums[i]>=steps) step[i]=1;
            else step[i] = min(step[i+1]+1,step[i+nums[i]]+1);
        }
        return step[0];
    }
};

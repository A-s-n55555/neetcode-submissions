class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=1,cand=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==cand) count++;
            else if(nums[i]!=cand && count>1) count--;
            else{
                cand = nums[i];
                count =1;
            }
        }
        return cand;
    }
};
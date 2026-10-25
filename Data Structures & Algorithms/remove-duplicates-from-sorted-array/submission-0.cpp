class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        int curr=0,next=1;
        while(next<n){
            if(nums[next]==nums[curr]) next++;
            else{
                nums[curr+1] = nums[next];
                curr++;
                next++;
            }
        }
        return curr+1;
    }
};
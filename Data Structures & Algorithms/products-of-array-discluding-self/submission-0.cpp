class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zc =0,p=1;
        vector<int> out(n);
        for(auto i:nums){
            if(i==0) zc++;
            else p *= i;
        }
        for(int i=0;i<n;i++){
            if(zc==0){
                out[i] = p/nums[i];
                continue;
            }
            if(nums[i]==0 && zc<2) out[i] = p;
            else if(nums[i]==0 && zc>1) out[i]=0;
            else if(nums[i] !=0 && zc>0) out[i]=0;
            
        }
        return out;
    }
};

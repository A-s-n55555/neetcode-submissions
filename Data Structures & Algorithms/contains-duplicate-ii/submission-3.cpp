class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                int previ = mp[nums[i]];
                if(abs(previ-i)<=k) return true;
                else mp[nums[i]] = i;
            }
            else mp[nums[i]] = i;
        }
        return 0;
    }
};
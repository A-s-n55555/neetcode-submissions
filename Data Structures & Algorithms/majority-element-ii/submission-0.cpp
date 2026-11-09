class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
            if(freq[i]>ceil(n/3)) {
                ans.push_back(i);
                freq[i] = -n;
            }
        }
        return ans;
    }
};
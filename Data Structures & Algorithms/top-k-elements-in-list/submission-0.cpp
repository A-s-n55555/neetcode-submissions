class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto& x:mp) pq.push({x.second,x.first});
        while(k--){
            auto p = pq.top();
            result.push_back(p.second);
            pq.pop();
        }
        return result;
    }
};

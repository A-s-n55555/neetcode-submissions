class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(), nums.end());
        int ans = 0;

        for (int num : set1) {
            if (set1.find(num - 1) == set1.end()) {
                int length = 1;
                while (set1.find(num + length) != set1.end()) {
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        while (right < n) {
            while (mp[s[right]] > 0) {
                mp[s[left]]--;
                left++;
            }
            mp[s[right]]++;
            ans = max(ans, right - left + 1);
            right++;
        }

        return ans;
    }
};
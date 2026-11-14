class Solution {
public:
    int n;
    vector<int> dp;
    unordered_set<string> st;
    bool solve(string& s, int i) {
        if(i == n) return true;
        if(dp[i] != -1) return dp[i];
        string str = "";
        for(int j = i; j < n; j++) {
            str += s[j];
            if(st.count(str)) {
                if(solve(s, j+1))
                    return dp[i] = true;
            }
        }

        return dp[i] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        dp.resize(n+1, -1);
        st = unordered_set<string>(wordDict.begin(), wordDict.end());

        return solve(s, 0);
    }
};
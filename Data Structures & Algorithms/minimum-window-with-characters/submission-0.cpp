class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int> tmp, win;
        for(auto c:t) tmp[c]++;
        int h=0, need = tmp.size();
        pair<int,int> ans = {-1,-1};
        int len = INT_MAX;
        int l=0;
        for(int r=0;r<n;r++){
            char c = s[r];
            win[c]++;
            if(tmp.count(c) && tmp[c]==win[c]) h++;
            while(h==need){
                if(r-l+1<len){
                    len = r-l+1;
                    ans = {l,r};
                }
                win[s[l]]--;
                if(tmp.count(s[l])&& win[s[l]]<tmp[s[l]]) h--;
                l++;
            }
        }
        return len == INT_MAX ?"":s.substr(ans.first,len);
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int s = strs[0].size();
        string str="";
        for(int k =0;k<s;k++){
            char c = strs[0][k];
            for(int i=1;i<n;i++){
                if(k>=strs[i].size()) return str;
                if(strs[i][k] != c){
                    return str;
                }
            }
            str +=c;
        }
        return str;
    }
};
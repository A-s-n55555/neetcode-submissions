class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int x = min(n,m);
        string str = "";
        for(int i=0;i<x;i++){
            str += word1[i];
            str +=word2[i];
        }
        int rem = max(n,m)-x;
        if(x<m)
            while(rem--) str +=word2[x++];
        
        else if(x<n)
            while(rem--) str +=word1[x++];
        
        return str;
    }
};
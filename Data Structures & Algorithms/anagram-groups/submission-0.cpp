class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        vector<vector<string>>result;
        for(auto& str:strs){
            vector<int> arr(26,0);
            string key="";
            for(char c:str){
                arr[c-'a']++;
            }
            for(int i=0;i<26;i++){
                key +=arr[i];
            }
            mp[key].push_back(str);
        }
        for(auto& pr:mp){
            result.push_back(pr.second);
        }
        return result;
    }
};

class Solution {
public:
    string encode(vector<string>& strs) {
        string str;
        for (const auto& s : strs)
            str += to_string(s.size()) + "#" + s;
        return str;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0, n = s.size();
        while (i < n) {
            int length = 0;
            while (s[i] != '#') {
                length = length * 10 + (s[i] - '0');
                i++;
            }
            i++; 
            result.push_back(s.substr(i, length));
            i += length;
        }

        return result;
    }
};
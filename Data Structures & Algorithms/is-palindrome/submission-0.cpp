class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = static_cast<int>(s.size()) - 1;

        while (l < r) {
            if (!isalnum(static_cast<unsigned char>(s[l]))) {
                l++;
                continue;
            }
            if (!isalnum(static_cast<unsigned char>(s[r]))) {
                r--;
                continue;
            }

            if (tolower(static_cast<unsigned char>(s[l])) !=
                tolower(static_cast<unsigned char>(s[r]))) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
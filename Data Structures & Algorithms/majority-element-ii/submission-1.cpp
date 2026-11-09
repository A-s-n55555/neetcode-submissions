class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a = 0, b = 0;
        int countA = 0, countB = 0;

        for (int x : nums) {
            if (x == a) countA++;
            else if (x == b) countB++;
            else if (countA == 0) {
                a = x;
                countA = 1;
            }
            else if (countB == 0) {
                b = x;
                countB = 1;
            }
            else {
                countA--;
                countB--;
            }
        }
        countA = countB = 0;
        for (int x : nums) {
            if (x == a) countA++;
            else if (x == b) countB++;
        }

        vector<int> ans;
        int n = nums.size();

        if (countA > n / 3) ans.push_back(a);
        if (countB > n / 3) ans.push_back(b);

        return ans;
    }
};
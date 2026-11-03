class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int total =0;
        for(int i:nums) total += i;
        int nsum = n*(n+1)/2;
        if(total==nsum) return 0;
        else return nsum-total;
    }
};

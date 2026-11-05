class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %=n;
        int count=0;
        for(int s=0;count<n;s++){
            int curr = s;
            int prev = nums[s];
            do {
                int nxt = (curr+k)%n;
                int temp = nums[nxt];
                nums[nxt] = prev;
                prev = temp;
                curr =  nxt;
                count++;
            } while(s != curr);
        }
    }
};
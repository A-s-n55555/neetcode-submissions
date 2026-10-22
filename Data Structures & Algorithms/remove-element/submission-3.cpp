class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            while (right >= left && nums[right] == val)
                right--;
            if (right < left)
                break;
            if (nums[left] == val) {
                swap(nums[left], nums[right]);
            }
            left++;
        }
        return left;
    }
};
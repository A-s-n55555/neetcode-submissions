class Solution {
public:
    int n;
    void mergesort(vector<int>& nums, int i, int j) {
        if (i >= j) return;
        int mid = i + (j - i) / 2;
        mergesort(nums, i, mid);
        mergesort(nums, mid + 1, j);
        vector<int> temp;
        int left = i, right = mid + 1;
        while (left <= mid && right <= j) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid)
            temp.push_back(nums[left++]);

        while (right <= j)
            temp.push_back(nums[right++]);

        for (int k = 0; k < temp.size(); k++)
            nums[i + k] = temp[k];
    }
    vector<int> sortArray(vector<int>& nums) {
        n = nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};
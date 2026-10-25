class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1;
        int pos = m+n-1;
        int right = n-1;
        while(pos!=left){
            if(left==-1){
                nums1[pos]= nums2[right];
                right--;
                pos--;
                continue;
            }
            if(nums1[left]>=nums2[right]){
                nums1[pos] = nums1[left];
                pos--;
                left--;
            }
            else if(nums1[left]<nums2[right]){
                nums1[pos] = nums2[right];
                pos--;
                right--;
            }
        }
    }
};
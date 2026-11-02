class Solution {
public:
    int n;
    bool caneat(vector<int>& nums,int h,int k){
        long long total=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=k) total++;
            else{
                double x = (double)nums[i]/k;
                int y = ceil(x);
                total +=y;
            }
        }
        if(total<=h) return 1;
        return 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        n = piles.size();
        int low = 1,high = *max_element(piles.begin(),piles.end());
        int ans =1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(caneat(piles,h,mid)) {
                high = mid-1;
                ans = mid;
            }
            else low = mid+1;
        }
        return ans;
    }
};

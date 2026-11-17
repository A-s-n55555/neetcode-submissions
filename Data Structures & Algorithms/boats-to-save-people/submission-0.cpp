class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int n = p.size();
        sort(p.begin(),p.end(),greater<int>());
        int left=0, right=n-1;
        int ans=0;
        while(left<=right){
            if(left==right){
                ans++;
                return ans;
            }
            if(p[left]+p[right]<=limit){
                ans++;
                left++;
                right--;
            }
            else{
                ans++;
                left++;
            }
        }
        return ans;
    }
};
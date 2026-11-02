class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans =0;
        int i=0,j=1;
        while(j<n){
            int diff = prices[j]-prices[i];
            if(prices[j]<prices[i]) i=j;
            ans = max(ans,diff);
            j++;
        }
        return ans;
    }
};

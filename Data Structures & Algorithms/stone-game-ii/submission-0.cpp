class Solution {
public:
    vector<vector<int>> dp;
    int total=0,n;
    int solve(vector<int>& piles,int i,int m,int rem){
        if(i>=n) return 0;
        if(dp[i][m]!=-1) return dp[i][m];
        int use =0,ans=0;
        for (int x=1;x<=2*m && i+x<=n;x++){
            use += piles[i+x-1];
            int r1 = solve(piles,i+x,max(x,m),rem-use);
            ans = max(rem-r1,ans);
        }
        return dp[i][m]= ans;
    }
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        for(int i:piles) total +=i;
        dp.resize(n+1,vector<int>(n+1,-1));
        return solve(piles,0,1,total);
    }
};
class Solution {
public:
    int coinChange(vector<int>& coins, int s) {
        int n=coins.size();
        vector<int> dp(s+1,1e9);dp[0]=0;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=s;j++)
            if(coins[i-1]<=j) dp[j]=min(1+dp[j-coins[i-1]],dp[j]);
        if(dp[s]>=1e9) return -1;
        return dp[s];
    }
};

class Solution
{
    public:
        int helper(vector<int> &coins, int amount, int n, vector<vector< int>> &dp)
        {
            if (n == 0) return INT_MAX - 1;
            if (amount == 0) return 0;
            if (amount < 0) return INT_MAX - 1;
            if (dp[n][amount] != -1) return dp[n][amount];
            return dp[n][amount] = min(helper(coins, amount, n - 1, dp), 1 + helper(coins, amount - coins[n - 1], n, dp));
        }
    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector < int>> dp(coins.size() + 1, vector<int> (amount + 1, -1));
        int a = helper(coins, amount, coins.size(), dp);
        if (a == INT_MAX - 1) return -1;
        return a;
    }
};

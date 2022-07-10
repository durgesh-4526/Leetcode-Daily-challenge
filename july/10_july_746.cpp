class Solution
{
    public:
        int helper(vector<int> &v, int n, vector<int> &dp)
        {
            if (n < 2)
            {
                return dp[n] = v[n];
            }
            if (dp[n] != -1) return dp[n];
            return dp[n] = v[n] + min(helper(v, n - 1, dp), helper(v, n - 2, dp));
        }
    int minCostClimbingStairs(vector<int> &cost)
    {
        int total = 0;
        vector<int> dp(cost.size() + 1, -1);
        return min(helper(cost, cost.size() - 1, dp), helper(cost, cost.size() - 2, dp));
    }
};

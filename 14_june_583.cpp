class Solution {
public:
    int dp[505][505];
    int rec(int i, int j, string &s, string &t) {
        if(i == 0 || j == 0)    return 0;
        if(dp[i][j] != -1)  return dp[i][j];
        if(s[i - 1] == t[j - 1]) return dp[i][j] = 1 + rec(i - 1, j - 1, s, t);
        return dp[i][j] = max(rec(i - 1, j, s, t), rec(i, j - 1, s, t));
    }
    int minDistance(string s, string t) {
        memset(dp, -1, sizeof(dp));
        return s.size() + t.size() - 2 * rec(s.size(), t.size(), s, t);
    }
};

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int rows = 0;
        int rowe = n-1;
        int cols = 0;
        int cole = n-1;
        n = n*n;
        int val = 1;
        while (val <= n)
        {
            for (int i = cols; i <= cole; i++)
            {
                ans[rows][i] = val++;
            }rows++;
            for (int i = rows; i <= rowe; i++)
            {
                ans[i][cole] = val++;
            }cole--;
            for (int i = cole; i >= cols; i--)
            {
                ans[rowe][i] = val++;
            }rowe--;
            for (int i = rowe; i >= rows; i--)
            {
                ans[i][cols] = val++;
            }cols++;
            
        }return ans;
    }
};

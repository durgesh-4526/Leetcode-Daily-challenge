lass Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        vector<vector<int>> temp = grid;
        while (k--)
        {
            int n = grid.size();
            int m = grid[0].size();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j + 1 < m)
                        temp[i][j + 1] = grid[i][j];
                    if (i + 1 < n)
                        temp[i + 1][0] = grid[i][m - 1];
                }
            }
            temp[0][0] = grid[n - 1][m - 1];
            grid = temp;
            return temp;
        }
    }
};

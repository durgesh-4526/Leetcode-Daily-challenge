class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        vector<pair<int, int>> temp;
        for (int i = 0; i < mat.size(); i++)
        {
            int a = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    a++;
                }
            }
            temp.push_back({a, i});
        }
        sort(temp.begin(), temp.end());
        for (auto j : temp)
        {
            if(k == 0)break;
            ans.push_back(j.second);
            k--;
        }
        return ans;
    }
};

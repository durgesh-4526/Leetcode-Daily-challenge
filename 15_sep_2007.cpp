class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            unordered_map<int, int> m;
            if(changed.size()%2 != 0)return {};
            vector<int> ans;
            for (auto i: changed)
            {
                m[i]++;
            }
            sort(changed.begin(), changed.end());
            for (int i = 0; i < changed.size(); i++)
            {
                if (m[changed[i]] == 0)
                {
                    continue;
                }
                if (m[changed[i]*2] == 0)
                {
                    return {};
                }
                ans.push_back(changed[i]);
                m[changed[i]]--;
                m[changed[i]*2]--;
            }
            return ans;
        }
};

class Solution
{
    public:
        vector<int> twoSum(vector<int> &n, int t)
        {
            int i = 0;
            int j = n.size() - 1;
            vector<int> ans;
            while (i <= j)
            {
                if (n[i] + n[j] < t)
                {
                    i++;
                }
                else if (n[i] + n[j] > t)
                {
                    j--;
                }
                else
                {
                    ans.push_back(i + 1);
                    ans.push_back(j + 1);
                    return ans;
                }
            }
            return ans;
        }
};

class Solution
{
    public:
        int candy(vector<int> &ratings)
        {
            int n = ratings.size();
            vector<int> a1(n, 1), a2(n, 1);
            for (int i = 1; i < ratings.size(); i++)
            {
                if (ratings[i] > ratings[i - 1])
                {
                    a1[i] = a1[i - 1] + 1;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                if (ratings[i] > ratings[i + 1])
                {
                    a2[i] = a2[i + 1] + 1;
                }
            }
            int ans = 0;
            for (int i = 0; i < a1.size(); i++)
            {
                ans += max(a1[i], a2[i]);
            }
            return ans;
        }
};

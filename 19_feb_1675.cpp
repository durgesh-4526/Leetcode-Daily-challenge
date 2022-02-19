class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0)
            {
                nums[i] *= 2;
            }
            s.insert(nums[i]);
        }
        int ans = *s.rbegin() - *s.begin();
        while (*s.rbegin() % 2 == 0)
        {
            int last = *s.rbegin();
            s.erase(last);
            s.insert(last / 2);
            ans = min(ans, *s.rbegin() - *s.begin());
        }
        return ans;
    }
};

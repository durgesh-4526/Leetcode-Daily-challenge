class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            int ans = 1;
            int maxi = 1;
            sort(nums.begin(), nums.end());
            if (nums.size() <= 1) return nums.size();
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] == nums[i + 1]) continue;
                else if (nums[i] + 1 == nums[i + 1])
                {
                    maxi++;
                }
                else
                {
                    ans = max(maxi, ans);
                    maxi = 1;
                }
            }
            return max(ans, maxi);
        }
};

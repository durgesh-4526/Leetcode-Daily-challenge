class Solution
{
    public:
        vector<int> searchRange(vector<int> &nums, int target)
        {
            int i = 0;
            int j = nums.size() - 1;
            while (i <= j)
            {
                if (nums[i] == target && nums[j] == target)
                {
                    return {
                        i,j
                    };
                }
                if (nums[i] != target)
                {
                    i++;
                }
                if (nums[j] != target)
                {
                    j--;
                }
            }
            return { -1,-1 };
        }
};

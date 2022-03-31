class Solution {
public:
    bool helper(int mid, vector<int> nums, int m)
    {
        int total = 0;
        int subarr = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > mid)
            {
                return false;
            }
            if (total + nums[i] <= mid)
            {
                total += nums[i];
            }
            else
            {
                subarr++;
                total = nums[i];
            }
        }
        return (subarr <= m);
    }
    int splitArray(vector<int> &nums, int m)
    {
        int l = 0;
        int r = (int)(1e9 + 1);
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (helper(mid, nums, m))
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};

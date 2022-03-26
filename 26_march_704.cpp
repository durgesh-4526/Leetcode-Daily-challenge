class Solution {
public:
    int binary(vector<int> &nums, int target, int l, int r)
    {
        if (l>r)
        {
            return -1;
        }
        int mid = l + (r - l) / 2;
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
           return binary(nums,target,l,mid-1);
        }
        else{
        return binary(nums,target,mid+1,r);
        }
    }
    int search(vector<int> &nums, int target)
    {
        // int l = 0;
        // int r = nums.size()-1;
        // cout<<binary(nums, target, l, r);
        return binary(nums, target, 0, nums.size()-1);
    }
};

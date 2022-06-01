class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans = nums;
        int a = 0;
        for(int i =0;i<nums.size();i++)
        {
            a += nums[i];
            ans[i] = a;
        }return ans;
    }
};

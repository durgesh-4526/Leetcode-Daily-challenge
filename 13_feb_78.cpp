class Solution {
public:
    // vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> s;
    void subset(vector<int> temp,int n ,int a, vector<int> nums)
    {
        if(a == n){
            if(s.find(temp) == s.end()){
                s.insert(temp);
                ans.push_back(temp);
            }
          return;
        }
        subset(temp,n,a+1,nums);
        temp.push_back(nums[a]);
        subset(temp,n,a+1,nums);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        subset(temp,n,0,nums);
        return ans;
    }
    // }
};

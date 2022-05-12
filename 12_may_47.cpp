class Solution {
public:
  vector<vector<int>> ans;
  set<vector<int>> s;
  void helper(vector<int> nums,int index){
    if(index == nums.size()){
      if(s.find(nums) == s.end()){
        ans.push_back(nums);
        s.insert(nums);
      }
      
      return;
    }
    for(int i = index;i<nums.size();i++){
      // ans.push_back(nums[i]);
      swap(nums[i],nums[index]);
      helper(nums,index+1);
      swap(nums[i],nums[index]);
    }
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      
        helper(nums,0);
      return ans;
    }
};

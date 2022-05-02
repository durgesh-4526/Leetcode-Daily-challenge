class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans = nums;
      // sort(nums.begin(),nums.end());
      int i = 0;
      int j = nums.size()-1;
      while(i<=j){
        if(nums[i]%2 != 0 && nums[j]%2 == 0){
          swap(ans[i],ans[j]);
          i++;
          j--;
        }
        if(nums[i]%2 == 0){
          i++;
        }
        if(nums[j]%2 != 0){
          j--;
        }
      }return ans;
    }
};

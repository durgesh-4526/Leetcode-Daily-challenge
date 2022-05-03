class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i = -1;
      int j = -1;
      vector<int> temp = nums;
      sort(temp.begin(),temp.end());
      for(int k = 0;k<temp.size();k++){
        if(nums[k] != temp[k] && i == -1){
          i = k;
        }else if(nums[k] != temp[k]) {
          j = k;
        }
      }if(j == i)return 0;
      return j-i+1;
    }
};

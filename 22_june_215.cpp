class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      // first approch
      priority_queue<int> pq;
        int i = 0;
        while (i < nums.size())
        {
            pq.push(nums[i++]);
        }
        while(k != 1){
            k--;
            pq.pop();
        }
        return pq.top();  
      
      // second approch
      sort(nums.begin(),nums.end());
      return nums[nums.size()-k];
    }
};

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int len = nums.size();
        int i = 0;
        int j;
        string temp = "";
        while (i<len)
        {
            j = i+1;
            while(j<len && nums[j-1]+1 == nums[j])j++;
            temp = to_string(nums[i])+(j-i>1 ?"->"+to_string(nums[j-1]) : "");
            ans.push_back(temp);
            i = j;
        }
        return ans;
    }
};

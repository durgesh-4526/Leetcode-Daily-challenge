class Solution {
public:
    void comi(int i, int sum, int target,
              vector<int> &arr, vector<vector<int>>& ans, vector<int> &possible)
    {
        if(sum == target){
            ans.push_back(possible);
            return;
        }
        if(sum > target || i == arr.size()){
            return;
        }
        sum+=arr[i];
        possible.push_back(arr[i]);
        comi(i,sum,target,arr,ans,possible);
        sum-=arr[i];
        possible.pop_back();
        comi(i+1,sum,target,arr,ans,possible);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates,
                                       int target)
    {
        // sort(candidates.begin(),candidates.end());
        // candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<vector<int>> ans;
        vector<int> possible;
        comi(0,0,target,candidates,ans,possible);
        return ans;
    }
};

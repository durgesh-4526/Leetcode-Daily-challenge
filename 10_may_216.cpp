class Solution {
public:
  vector<vector<int>> ans;
  void helper(int k,int n,int sum,vector<int>& p){
    if(n<0 || p.size() > k)return;
    if(n == 0 && p.size() == k){
        ans.push_back(p);
      return;
    }
    // helper(k,n,sum,p,index+1,count+1);
    // p.push_back(count);
    // helper(k,n,sum+count,p,index+1,count+1);  
    for(int i = sum;i<=9;i++){
      p.push_back(i);
      helper(k,n-i,i+1,p);
      p.pop_back();
    }
  }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> p;
      int sum = 1;
      helper(k,n,sum,p);
        return ans;
    }
};

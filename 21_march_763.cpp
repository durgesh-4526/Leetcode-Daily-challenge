class Solution {
public:
    vector<int> partitionLabels(string s) {
      unordered_map<char,int> m;
      vector<int> ans;
      for(int i = 0;i<s.size();i++){
        m[s[i]] = i;
      }
      int begin = {0};
      int end = {0};
      for(int i = 0;i<s.size();i++){
        end = max(end,m[s[i]]);
        if(end==i){
          ans.push_back(end-begin+1);
          begin = i+1;
        }
      }
      return ans;
    }
};

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
      vector<vector<int>> t;
      for(int i = 0;i<words.size();i++){
        vector<int> p(26,0);
        for(auto a1 : words[i]){
          p[a1 - 'a']++;
        }
        t.push_back(p);
      }
      for(int i = 0;i<words.size();i++){
        for(int j = i+1;j<words.size();j++){
          bool flag= true;
          for(int k = 0;k<26;k++){
            if(t[i][k]>0 && t[j][k] > 0){
              flag = false;
              break;
            }
          }
          if(flag)ans = max(ans,(int)words[i].size()*(int)words[j].size());
        }
      }
      return ans;
    }
};

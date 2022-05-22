class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
      int l = 0;
      int r = 0;
      for(int i = 0;i<s.size();i++){
        l = i;
        r = i;
        while(l>= 0 && r<s.size() && s[l] == s[r]){
          ans++;
          l--;
          r++;
        }
        l = i;
        r = i+1;
        while(l>= 0 && r<s.size() && s[l] == s[r]){
          ans++;
          l--;
          r++;
        }
      }
      return ans;
    }
};

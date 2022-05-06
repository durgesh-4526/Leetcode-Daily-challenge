class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
      int i = 0;
      while(i < s.size()){
         if(st.size() == 0){
          st.push({s[i],1});
        }else if(st.top().first == s[i]){
          st.push({s[i],st.top().second + 1});
        }
        else {
          // if(st.top().first != s[i]){
          st.push({s[i],1});
        }
        if(st.top().second == k){
          // int a = k;
          for(int j = 0;j<k;j++){
            st.pop();
          }
        }
        
        i++;
      }
       string ans = "";
      // if(!st.empty()){
        while(!st.empty()){
          ans += st.top().first;
          st.pop();
        }
      reverse(ans.begin(),ans.end());
      // }
      return ans;
    }
};

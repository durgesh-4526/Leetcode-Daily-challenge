class Solution {
public:
    vector<string> store = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> helper(string digits){
    if(digits.size() == 0){
      vector<string> ans;
      ans.push_back("");
      return ans;
    }
    char a = digits[0];
    string a0 = digits.substr(1);
    vector<string> a1 = helper(a0);
    vector<string> a2;
    string a3 = store[a - '0'];
    for(int i = 0;i<a3.size();i++){
      char p = a3[i];
      for(auto j : a1){
        a2.push_back(p+j);
      }
    }
      return a2;
    
  }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)return {};
        return helper(digits);
    }
};

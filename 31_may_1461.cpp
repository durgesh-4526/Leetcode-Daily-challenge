class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int> m;
      for(int i = 0;i+k-1<s.size();i++){
        string a = s.substr(i,k);
        if(m.find(a) == m.end())m[a]++;
        if(m.size() == pow(2,k))return true;
      }return false;
    }
};

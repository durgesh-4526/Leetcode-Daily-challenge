class Solution {
public:
  void helper(int j,int length,int n,int &count){
    length++;
    if(length == n){
      count++;
      return;
    }
    for(int i = j;i<5;i++){
      helper(i,length,n,count);
    }
  }
    int countVowelStrings(int n) {
      int count = 0;
        for(int i = 0;i<5;i++){
          helper(i,0,n,count);
        }
      return count;
    }
};

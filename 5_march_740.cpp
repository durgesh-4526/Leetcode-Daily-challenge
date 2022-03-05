class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int inc=0,exc=0;
        unordered_map<int,int>count(0);
        for(int val:nums) count[val]++;
        
        for(int i=0;i<10001;i++){
            int ni=exc+ (count[i]*i) ;
            int ne=max(inc,exc);
            
            inc=ni;
            exc=ne;
        }
        return max(inc,exc);
    }
};

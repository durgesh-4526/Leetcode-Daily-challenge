class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int, int> m;
        int val = -1;
        int ans = 0;
        int ans2 = 0;
        for (auto it : tops)
        {
            m[it]++;
        }
        for (auto it : bottoms)
        {
            m[it]++;
        }
        for (auto its = m.begin(); its != m.end(); its++)
        {
            if(its->second >= tops.size()){
                val = its->first;
            }
        }
        if(val == -1){
            return -1;
        }
        for (int i = 0; i < tops.size(); i++)
        {
            if(tops[i] == val && bottoms[i] == val){
                continue;
            }
            else if(tops[i] == val){
                ans++;
            }
            else if(bottoms[i] == val){
                ans2++;
            }else{
                return -1;
            }
        }
        return min(ans,ans2);
    }
};

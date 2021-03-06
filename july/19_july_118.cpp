class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int line=1; line<=numRows; line++){
            
            int c=1;
            vector<int> temp;
            for(int i=1; i<=line; i++){
                
                temp.push_back(c);
                c = c * (line-i)/i;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

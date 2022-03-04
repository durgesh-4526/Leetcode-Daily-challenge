class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> v(102,vector<double>(102,0.0));
        v[0][0]=poured;
        for(int i=1;i<=query_row;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    if(v[i-1][j]>1){
                    v[i][j] = (v[i-1][j]-1.0)/2.0;
                    }
                }
                else if(j==i){
                    if(v[i-1][j-1]>1){
                    v[i][j] = (v[i-1][j-1]-1.0)/2.0;
                    }
                }
                else if(v[i-1][j-1]>1 && v[i-1][j]>1){
                    v[i][j] = (v[i-1][j-1]+v[i-1][j]-2.0)/2.0;
                }
                else if(v[i-1][j-1]>1){
                    v[i][j] = (v[i-1][j-1]-1.0)/2.0;
                }
                else if(v[i-1][j]>1){
                    v[i][j] = (v[i-1][j]-1.0)/2.0;
                }
            }
        }
        if(v[query_row][query_glass]>1){
            return 1;
        }
        else{
        return v[query_row][query_glass];
        }
    }
};

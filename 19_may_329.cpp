class Solution {
public:
    bool check(int x,int y,int m,int n){
        if(x>=0 && x<m && y>=0 && y<n)return true;
        return false;
    }
    void dfs(int i,int j,vector<vector<int>> &matrix,vector<vector<int>> &path){
        path[i][j] = 1;
        int maxi = 0;
        int m = matrix.size(),n = matrix[0].size();
        if(check(i,j+1,m,n)){
            if(matrix[i][j] < matrix[i][j+1]){
                if(path[i][j+1] == -1){
                    dfs(i,j+1,matrix,path);
                }
                maxi = max(maxi,path[i][j+1]);
            }
        }
        if(check(i,j-1,m,n)){
            if(matrix[i][j] < matrix[i][j-1]){
                if(path[i][j-1] == -1){
                    dfs(i,j-1,matrix,path);
                }
                maxi = max(maxi,path[i][j-1]);
            }
        }
        if(check(i+1,j,m,n)){
            if(matrix[i][j] < matrix[i+1][j]){
                if(path[i+1][j] == -1){
                    dfs(i+1,j,matrix,path);
                }
                maxi = max(maxi,path[i+1][j]);
            }
        }
        if(check(i-1,j,m,n)){
            if(matrix[i][j] < matrix[i-1][j]){
                if(path[i-1][j] == -1){
                    dfs(i-1,j,matrix,path);
                }
                maxi = max(maxi,path[i-1][j]);
            }
        }
        path[i][j] = maxi + 1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size(),n = matrix[0].size();
        vector<vector<int>> path(m,vector<int>(n,-1));
        int maxi = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(path[i][j] == -1){
                    path[i][j] = 1;
                    dfs(i,j,matrix,path);
                }
                maxi = max(maxi,path[i][j]);
            }
        }
        return maxi;
    }
};

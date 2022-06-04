class Solution {
public:
     bool safe(vector<string> ans,int n,int row,int col){
         for(int i = 0;i<n;i++){
             if(ans[i][col] == 'Q')return false;
         }
         for(int i = 0;i<n;i++){
             if(ans[row][i] == 'Q')return false;
         }
         for(int i = row-1,j = col-1;i>=0&& j>= 0;i--,j--){
             if(ans[i][j] == 'Q')return false;
         }
         for(int i = col+1,j = row-1;i<n&& j>= 0;i++,j--){
             if(ans[j][i] == 'Q')return false;
         }
         return true;
    }
    void queen(int n,int row,vector<string>& board,vector<vector<string>>& ans){
        if(row == n){
           ans.push_back(board);
            return;
        }
        for(int col = 0;col<n;col++){
            if(safe(board,n,row,col)){
                board[row][col] = 'Q';
                queen(n,row+1,board,ans);
                board[row][col] = '.';
            }
        }
        // return ;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n,'.');
        for(int i = 0;i<n;i++){
           board.push_back(s);
        }
        queen(n,0,board,ans);
        return ans;
    }
};

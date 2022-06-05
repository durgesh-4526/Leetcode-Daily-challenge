class Solution {
public:
  bool issafe(int n, int row, int col,vector<vector<int>> &board){
    for(int i = row-1;i>=0;i--){
      if(board[i][col] == 1)return false;
    }
    for(int i = row,j = col;i>=0 && j>= 0;i--,j--){
      if(board[i][j] == 1)return false;
    }
    for(int i = row,j = col;i>=0 && j<n;i--,j++){
      if(board[i][j] == 1)return false;
    }
    return true;
    
  }
  void helper(int n, int row,int& count,vector<vector<int>> &board){
    if(row == n){
      count++;
      return;
    }
    for(int col = 0;col<n;col++){
      if(issafe(n,row,col,board)){
        board[row][col] = 1;
        helper(n,row+1,count,board);
        board[row][col] = 0;
      }
    }
    return;
  }
    int totalNQueens(int n) {
      int count = 0;
      vector<vector<int>> board(n,vector<int>(n,0));
      helper(n,0,count,board);
      return count;
    }
};

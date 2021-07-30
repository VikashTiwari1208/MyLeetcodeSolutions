class Solution {
public:
    
    
 void solve(int col,vector<vector<string>>&ans,vector<int>&leftrow,vector<int>&lowdiag,vector<int>&updiag,vector<string>&board,int n)
 {
     if(col==n)
     {
         ans.push_back(board);
         return;
     }
     for(int row=0;row<n;row++)
     {
         if(leftrow[row]==0 && lowdiag[row + col] == 0 
               && updiag[n-1 + col - row] == 0) {
                
                board[row][col] = 'Q'; 
                leftrow[row] = 1; 
                lowdiag[row+col] = 1; 
                updiag[n-1 + col - row] = 1;
                 solve(col+1,ans,leftrow,lowdiag,updiag,board,n);
                board[row][col] = '.'; 
                leftrow[row] = 0; 
                lowdiag[row+col] = 0; 
                updiag[n-1 + col - row] = 0;
            }
     }
 }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
     vector<vector<string>>ans;
         vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }// intilaised our retunr board;
        // q 
        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0); 
        solve(0,ans,leftRow,lowerDiagonal,upperDiagonal,board,n);
        return ans;
    }
};
class Solution {
public:
    bool check(vector<vector<char>>&b,int val,int i,int j)
    {
        if(b[i][j]!='.')
        {
            return false;
        }
        for(int col=0;col<9;col++)
        {
            if(b[i][col]==val)
            {
                return false;
            }
        }
        for(int row=0;row<9;row++)
        {
            if(b[row][j]==val)
            {
                return false;
            }
        }
        int r=(i/3)*3;
        int c=(j/3)*3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(b[r+i][c+j]==val)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(int row,int col,vector<vector<char>>&board)
    {
        if(row==9)
        {
            return true;
        }
        if(col==9)
        {
            return helper(row+1,0,board);
        }
        if(board[row][col]!='.')
        {
            return helper(row,col+1,board);
        }
       
           
                for(char c='1';c<='9';c++)
                {
                    if(check(board,c,row,col))
                    {
                        board[row][col]=c;
                        bool ans=helper(row,col+1,board);
                        if(ans==false)
                        {
                            board[row][col]='.';
                        }
                        if(ans==true)
                        {
                            return true;
                        }
                    }
                }
            
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
      helper(0,0,board);
    }
};
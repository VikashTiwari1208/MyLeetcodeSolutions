class Solution {
public:
    void transpose(vector<vector<int>>&mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<m;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
    void reflect(vector<vector<int>>&mat)
  {
         int n=mat.size();
        int m=mat[0].size();
     for(int i=0;i<n;i++)
     {
       for(int j=0;j<m/2;j++)
       {
         swap(mat[i][j],mat[i][n-j-1]);
       }
     }
  }
    void rotate(vector<vector<int>>& mat) {
                   transpose(mat);
        reflect(mat);
    }
};
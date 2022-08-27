class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n=grid.size();
        int m=grid[0].size();
        if(n*m==1)
        {
            return 0;
        }
        int cnt=0;
        int val=grid[0][0]%x;
        vector<int>v;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v.push_back(grid[i][j]);
                if(grid[i][j]%x!=val)
                {
                    flag=false;
                }
            }
        }
        sort(v.begin(),v.end());
        if(flag==false)
        {
            return -1;
        }
       
            int mid=v[(n*m)/2];
        for(int i=0;i<n*m;i++)
        {
            int val=abs(v[i]-mid)/x;
            cnt+=val;
        }
           return cnt;
       
          
    }
};
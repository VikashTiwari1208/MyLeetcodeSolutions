class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int n=34,i;
        vector<vector<int>> ans(n);
        ans[0]={1};
        ans[1]={1,1};
        for( i=2; i<n; i++){
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            for(int j=1; j<i; j++)
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                //cout<<ans[i][j]<<" ";
            }
        }
            return ans[rowIndex];
    
    }
};
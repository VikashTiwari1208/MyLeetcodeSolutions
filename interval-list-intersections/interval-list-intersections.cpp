class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>ans;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][0]<=b[j][1]&&a[i][1]>=b[j][0])
                {
                    int start=max(a[i][0],b[j][0]);
                    int end=min(a[i][1],b[j][1]);
                    vector<int>temp{start,end};
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
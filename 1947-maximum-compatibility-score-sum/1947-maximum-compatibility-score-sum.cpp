class Solution {
public:
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int n=students[0].size();
        int m=students.size();
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            v.push_back(i);
        }
        int ans=0;
        do{
            
            int curr_sum=0;
            for(int i=0;i<m;i++)
            {
                int temp=0;
                for(int j=0;j<n;j++)
                {
                    if(students[v[i]][j]==mentors[i][j])
                    {
                        temp++;
                    }
                }
                curr_sum+=temp;
            }
            ans=max(ans,curr_sum);
        }while(next_permutation(v.begin(),v.end()));
        return ans;
    }
};
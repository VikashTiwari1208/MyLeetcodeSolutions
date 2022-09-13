class Solution {
public:
    unordered_map<string,int>index;
   
    unordered_map<int,int>mask;
    vector<int>ans;
    int fmask;
    int maxi;
    int mini=INT_MAX;

    vector<int> smallestSufficientTeam(vector<string>& skills, vector<vector<string>>& people) {
        int n=skills.size();
        int m=people.size();
        fmask=(1<<n)-1;
       maxi=m;
        for(int i=0;i<n;i++)
        {
            index[skills[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            int mk=0;
            for(auto x:people[i])
            {
                mk=mk|(1<<(index[x]));
            }
            mask[i]=mk;
        }
        vector<int>dp(fmask+1,INT_MAX);
        dp[0]=0;
        vector<int>parent(fmask+1,-1);
        vector<int>state(fmask+1,-1);
        for(int i=0;i<=fmask;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(dp[i]==INT_MAX)
                {
                    continue;
                }
                int nmask=(i|mask[j]);
                if(dp[nmask]>dp[i]+1)
                {
                    dp[nmask]=dp[i]+1;
                    parent[nmask]=j;
                    state[nmask]=i;
                }
            }
        }
        cout<<dp[fmask];
        ans.push_back(parent[fmask]);
        fmask=state[fmask];
        while(parent[fmask]!=-1)
        {
          ans.push_back(parent[fmask]);  
         fmask=state[fmask];
        }
        
        
        return ans;
    }
};
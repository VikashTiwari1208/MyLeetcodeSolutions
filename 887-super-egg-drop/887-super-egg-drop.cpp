class Solution {
public:
    int dp[102][10001];
    int find(int k,int n)
    {
        if(k==1)
        {
            return n;
        }
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(dp[k][n]!=-1)
        {
            return dp[k][n];
        }
         int l=0;
        int r=n;
        int ans=INT_MAX;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int brk=find(k-1,mid-1);
            int ntbrk=find(k,n-mid);
            int temp=1+max(brk,ntbrk);
            if(brk<ntbrk)
            {
                l=mid+1;
            }
            else 
            {
                r=mid-1;
            }
              ans=min(ans,temp);
            
        }
        return dp[k][n]=ans;
        
    }
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return find(k,n);
    }
};
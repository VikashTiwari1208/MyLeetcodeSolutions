class Solution {
public:
    int mod=1e9+7;
    map<int,int>cnt,mask;
    vector<vector<int>>dp;
    vector<int>good;
    vector<int>prime{2,3,5,7,11,13,17,19,23,29};
    int helper(int idx,int &sz,int m)
    {
        if(idx>=sz)
        {
            if(m>0)
            {
            //    cout<<"base "<<m<<endl;
                return 1;
            }
            return 0;
        }
        if(dp[idx][m]!=-1)
        {
            return dp[idx][m];
        }
        long long int ans=0;
       // cout<<idx<<" "<<m<<" "<<good[idx]<<endl;
        ans=(ans%mod+helper(idx+1,sz,m)%mod)%mod;// skip
        if((m&(mask[good[idx]]))==0)
        {
         //   cout<<idx<<" "<<m<<" "<<good[idx]<<endl;
          long long int temp=helper(idx+1,sz,m|(mask[good[idx]]))%mod;
          temp=(temp%mod*cnt[good[idx]]%mod)%mod;
           ans=(ans%mod+temp%mod)%mod;
        }
        return dp[idx][m]=ans;
    }
   long long int binpow(long long int base, long long int exp)
{
    
   long long res = 1;
   while (exp > 0)
   {
      if (exp % 2 == 1)
         res = (res * base) % mod;
      exp = exp >> 1;
      base = (base * base) % mod;
   }
   return res;
}
    int numberOfGoodSubsets(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                ones++;
            }
            int m=0;
            int val=nums[i];
            bool flag=true;
            for(int j=0;j<10;j++)
            {
                int cnt=0;
                while(val%prime[j]==0)
                {
                    val=val/prime[j];
                    cnt++;
                }
                if(cnt>1)
                {
                    flag=false;
                    break;
                }
                if(cnt==1)
                {
                    m=m|(1<<j);
                }
            }
            if(flag&&nums[i]>1)
            {
               if(cnt[nums[i]]==0)
               {
                   //cout<<nums[i]<<" ";
                    good.push_back(nums[i]);
               }
                mask[nums[i]]=m;
                cnt[nums[i]]++;
            }
        }
        //cout<<endl;
        int sz=good.size();
        dp.resize(sz+1,vector<int>(1<<10,-1));
       long long int ans= helper(0,sz,0);
       // cout<<ans<<endl;
        int temp=binpow(2,ones);
        ans=((ans%mod)*(temp%mod))%mod;
        return ans;
    }
};
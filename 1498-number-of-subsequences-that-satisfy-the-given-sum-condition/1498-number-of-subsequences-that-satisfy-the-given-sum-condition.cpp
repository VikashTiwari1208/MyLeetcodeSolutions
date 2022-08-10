class Solution {
public:
      int mod=1e9+7;
long long int binpow(long long int a, long long int b ) {
    long long int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
      
       long long int ans=0;
        for(int i=0;i<n;i++)
        {
            int min=nums[i];
            int t=target-min;
            auto idx=upper_bound(nums.begin()+i,nums.end(),t)-nums.begin();
          
               int len=idx-i-1;
             //  cout<<idx<<" "<<i<<" "<<len<<endl;
               // cout<<binpow(2,len)<<endl;
                if(len>=0)
                {
                    ans=(ans%mod+binpow(2,len))%mod;
                }
        }
        return ans;
        
    }
};
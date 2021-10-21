class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        int mod=(int)1e9+7;
        int n=nums.size();
        sort(nums.begin(),nums.end());
       long long int ans=0;
        long long int pow2[n];
        pow2[0]=1;
        for(int i=1;i<n;i++)
        {
            pow2[i]=(pow2[i-1]*2)%mod;
        }
        for(int i=0;i<n;i++)
        {
            ans=(ans+(pow2[i]*nums[i]-(pow2[n-i-1]*nums[i])))%mod;
        }
        return ans;
    }
};
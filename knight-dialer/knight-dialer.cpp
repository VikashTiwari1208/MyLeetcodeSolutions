class Solution {
public:
    long long int M=1000000007;
    int knightDialer(int n) {
        vector<long long int>v(10,1);
        v[5]=0;
        if(n==1)
        {
            return 10;
        }
        vector<long long int>curr(10,0);
        for(int i=1;i<n;i++)
        {
           curr[1]=(v[6]+v[8])%M;   
             curr[2]=(v[9]+v[7])%M;   
             curr[3]=(v[4]+v[8])%M;   
             curr[4]=(v[9]+v[3]+v[0])%M;   
             curr[0]=(v[6]+v[4])%M;   
             curr[6]=(v[1]+v[7]+v[0])%M;   
             curr[7]=(v[6]+v[2])%M;   
              curr[8]=(v[1]+v[3])%M;           
             curr[9]=(v[2]+v[4])%M;
            for(int i=0;i<10;i++)
            {
                v[i]=curr[i];
            }
        }
        int ans=0;
        for(int i=0;i<10;i++)
        {
            ans+=v[i];
            ans=ans%M;
        }
        return ans;
    }
};
class Solution {
public:
    int dp[101][101];
    int helper(int idx1,int idx2,int idx3,string temp,string &s1,string &s2,string &s3)
    {
        int n=s1.length();
        int m=s2.length();
        int z=s3.length();
        if(idx1>n||idx2>m||idx3>z)
        {
            return false;
        }
        if(idx1==n&&idx2==m&&idx3==z)
        {
          //  cout<<temp<<endl;
            return temp==s3;
        }
       
        if(dp[idx1][idx2]!=-1)
        {
            return dp[idx1][idx2];
        }
        bool flag=false;
        if(idx1<n&&s1[idx1]==s3[idx3])
        {
            string temp1=temp+s1[idx1];
            flag=flag||helper(idx1+1,idx2,idx3+1,temp1,s1,s2,s3);
        }
        if(idx2<m&&s2[idx2]==s3[idx3])
        {
            string temp2=temp+s2[idx2];
            flag=flag||helper(idx1,idx2+1,idx3+1,temp2,s1,s2,s3);
        }
        return dp[idx1][idx2]=flag;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length();
        int m=s2.length();
        int z=s3.length();
        if(n+m!=z)
        {
            return false;
        }
        memset(dp,-1,sizeof(dp));
        return helper(0,0,0,"",s1,s2,s3);
    }
};
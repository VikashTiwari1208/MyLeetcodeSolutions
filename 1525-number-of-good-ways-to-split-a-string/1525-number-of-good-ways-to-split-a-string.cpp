class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>mp1,mp2;
        int n=s.length();
        int ans=0;
        vector<int> left(n),right(n);
        for(int i=0;i<n;i++)
        {
            mp1[s[i]]++;
            left[i]=mp1.size();
           // cout<<left[i]<<" ";
        }
      //  cout<<endl;
        for(int i=n-1;i>=0;i--)
        {
            mp2[s[i]]++;
            right[i]=mp2.size();
           // cout<<right[i]<<" ";
        }
        for(int i=0;i<n-1;i++)
        {
            if(left[i]==right[i+1])
            {
                ans++;
            }
        }
        return ans;
    }
};
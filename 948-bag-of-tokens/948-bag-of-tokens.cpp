class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int p) {
        int n=token.size();
        sort(token.begin(),token.end());
        int ans=0;
        int l=0;
        int r=n-1;
        int res=0;
        while(l<=r)
        {
            if(p>=token[l])
            {
                p-=token[l];
                    ans++;
                l++;
               res=max(res,ans);
            }
            else if(ans>=1)
            {
                p+=token[r];
                r--;
                ans--;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};
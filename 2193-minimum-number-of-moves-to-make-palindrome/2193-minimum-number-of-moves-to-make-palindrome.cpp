class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.length();
        int ans=0;
        int l=0;
        int r=n-1;
       
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                int i=l;
                int j=r-1;
                //bool flag=false;
                while(j>l&&s[j]!=s[l])
                {
                    j--;
                }
                if(j==l)
                {
                  
                    ans++;
                    swap(s[j],s[j+1]);
                    //l++;
                    continue;
                    
                }
                else
                {
                    while(j<r)
                    {
                        swap(s[j],s[j+1]);
                        j++;
                        ans++;
                    }
                }
                
            }
            l++;
            r--;
        }
        cout<<s<<endl;
        return ans;
    }
};
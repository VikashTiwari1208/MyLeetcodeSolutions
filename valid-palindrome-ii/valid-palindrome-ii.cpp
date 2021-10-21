class Solution {
public:
    bool ispallindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return ispallindrome(s,i,j-1)||ispallindrome(s,i+1,j);
            }
            i++;
            j--;
        }
        return true;
    }
};
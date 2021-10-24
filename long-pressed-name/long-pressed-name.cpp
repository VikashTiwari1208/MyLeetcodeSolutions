class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j=0;
        int m=name.length();
        int n=typed.length();
        for(int i=0;i<n;i++)
        {
            if(j<m&&typed[i]==name[j])
            {
                j++;
            }
            else
            {
                if(i==0||i>0&&typed[i]!=typed[i-1])
                {
                    return false;
                }
            }
        }
        return j==m;
    }
};
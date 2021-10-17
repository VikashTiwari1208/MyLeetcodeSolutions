class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.length();
        int maxi=-1;
        int max_idx=-1;
        int left_idx=-1;
        int right_idx=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]-'0'>maxi)
            {
                maxi=s[i]-'0';
                max_idx=i;
            }
            if(s[i]-'0'<maxi)
            {
                left_idx=i;
                right_idx=max_idx;
            }
        }
        if(left_idx==-1)
        {
            return stoi(s);
        }
        swap(s[left_idx],s[right_idx]);
        return stoi(s);
    }
};
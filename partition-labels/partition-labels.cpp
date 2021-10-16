class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        unordered_map<char,int>pos;
        for(int i=0;i<n;i++)
        {
            pos[s[i]]=i;
        }
        int maxi=-1;
        int len=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,pos[s[i]]);
            len++;
            if(maxi==i)
            {
                ans.push_back(len);
                len=0;
                maxi=-1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n=target.size();
        int ans=0;
        ans+=target[0];
        for(int i=1;i<n;i++)
        {
            ans+=max((int)0,target[i]-target[i-1]);
        }
        return ans;
    }
};
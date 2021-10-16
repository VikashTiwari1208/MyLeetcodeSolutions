class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int mini[n];
        mini[n-1]=arr[n-1];
        int cnt =0;
        for(int i=n-2;i>=0;i--)
        {
            mini[i]=min(mini[i+1],arr[i]);
        }
        int maxi=-1;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(maxi,arr[i]);
            if(maxi<=mini[i+1])
            {
                cnt++;
            }
        }
        return cnt+1;
    }
};
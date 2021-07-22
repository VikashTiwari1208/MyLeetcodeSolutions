class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int cnt=0;
         int curr=0;
        int n=light.size();
        for(int i=0;i<n;i++)
       {
           curr=max(curr,light[i]);
            if(curr==i+1)
            {
                cnt++;
            }
       }
        return cnt;
    }
};
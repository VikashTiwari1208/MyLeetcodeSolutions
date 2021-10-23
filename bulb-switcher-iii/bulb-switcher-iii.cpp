class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int n=light.size();
        int cnt=0;
        int curr_mx=-1;
        for(int i=0;i<n;i++)
        {
            curr_mx=max(light[i],curr_mx);
            if(curr_mx==i+1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>frq,cntfrq;
        for(int i=0;i<n;i++)
        {
           frq[nums[i]]++;
            cntfrq[frq[nums[i]]]++;
            if(i+1<n&&cntfrq[frq[nums[i]]]*frq[nums[i]]==(i+1))
            {
               ans=min(i+2,n);
               //  cout<<i<<" "<<ans<<endl;
            }
             if(cntfrq[frq[nums[i]]]*frq[nums[i]]==i)
            {

                ans=i+1;
                              //  cout<<i <<" "<<ans<<endl;
             }
        }
        return ans;
    }
};
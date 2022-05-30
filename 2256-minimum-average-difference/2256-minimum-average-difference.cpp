class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        long long int pre[n];
        pre[0]=nums[0];
       long long int sum=nums[0];
        for(int i=1;i<n;i++)
        {
            sum+=nums[i];
            pre[i]=pre[i-1]+nums[i];
        }
        long long int ans=INT_MAX;
        int idx;
        for(int i=0;i<n;i++)
        {
          long long int temp=sum;
            temp-=pre[i];
            int av1=pre[i]/(i+1);
             int av2=0;
            if(i==n-1)
            {
                av2=0;
            }
            else
            {
                av2=temp/(n-i-1);
            }
           
            if(ans>abs(av1-av2))
            {
                ans=abs(av1-av2);
                idx=i;
            }
        }
        return idx;
    }
};
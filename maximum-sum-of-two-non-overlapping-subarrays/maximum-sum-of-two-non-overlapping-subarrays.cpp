class Solution {
public:
   
    int maxSumTwoNoOverlap(vector<int>& nums, int a ,int b){
        int n=nums.size();
       if(a>b)
       {
           swap(a,b);
       }
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        int lmax=nums[a-1];
        int rmax=nums[b-1];
        int res=nums[a+b-1];
        for(int i=a+b;i<n;i++)
        {
            lmax=max(lmax,nums[i-b]-nums[i-a-b]);
            rmax=max(rmax,nums[i-a]-nums[i-a-b]);
            int a1=lmax+nums[i]-nums[i-b];
            int a2=rmax+nums[i]-nums[i-a];
            res=max(res,max(a1,a2));
        }
        return res;
    }
};
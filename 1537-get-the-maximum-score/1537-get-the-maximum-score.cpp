class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
       long long int sum=0;
        int mod=1e9+7;
        long long int sum1=0;
        long long int sum2=0;
        while(i<n&&j<m)
        {
            if(nums1[i]<nums2[j])
            {
                sum1+=nums1[i];
                i++;
            }
            else if(nums2[j]<nums1[i])
            {
                sum2+=nums2[j];
                j++;
            }
            else
            {
                sum=(sum%mod+max(sum1,sum2)%mod+nums1[i]%mod)%mod;
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        while(i<n)
        {
            sum1+=nums1[i];
            i++;
        }
        while(j<m)
        {
            sum2+=nums2[j];
            j++;
        }
         sum=(sum%mod+max(sum1,sum2)%mod)%mod;
        return sum;
    }
};
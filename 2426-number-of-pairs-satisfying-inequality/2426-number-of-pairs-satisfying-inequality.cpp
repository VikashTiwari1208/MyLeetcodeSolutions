class Solution {
public:
    long long ans=0;
    void merge(vector<int>&v,int l,int r,int &diff)
    {
        int mid=l+(r-l)/2;
        int i=l;
        int j=mid+1;
        vector<int>temp(r-l+1);
        int idx=0;
        while(i<=mid&&j<=r)
        {
            if(v[i]<=v[j]+diff)
            {
                ans+=r-j+1;
               // temp[idx++]=v[i];
                i++;
            }
            else
            {
               // temp[idx++]=v[j];
                j++;
            }
        }
        i=l;
        j=mid+1;
          while(i<=mid&&j<=r)
        {
            if(v[i]<v[j])
            {
               // ans+=r-j+1;
                temp[idx++]=v[i];
                i++;
            }
            else
            {
                temp[idx++]=v[j];
                j++;
            }
        }
         while(i<=mid)
        {
            temp[idx++]=v[i++];
        }
        while(j<=r)
        {
            temp[idx++]=v[j++];
        }
        for(int i=l;i<=r;i++)
        {
            v[i]=temp[i-l];
        }
    }
    void helper(vector<int>&v,int l,int r,int &diff)
    {
        if(l>=r)
        {
            return ;
        }
        int mid=l+(r-l)/2;
        helper(v,l,mid,diff);
        helper(v,mid+1,r,diff);
        merge(v,l,r,diff);
    }
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        int n=nums1.size();
        vector<int>d(n);
        for(int i=0;i<n;i++)
        {
            d[i]=nums1[i]-nums2[i];
        }
        helper(d,0,n-1,diff);
        return ans;
    }
};
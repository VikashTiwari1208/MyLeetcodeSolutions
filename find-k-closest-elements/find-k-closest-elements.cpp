class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
      int l=0;
      int r=n-1;
      // largest elemt <=x;
      int ans=0;
     // k--;
      while(l<=r)
      {
        int mid=l+(r-l)/2;
        if(arr[mid]<x)
        {
          ans=mid;
          l=mid+1;
        }
        else
        {
          r=mid-1;
        }
      }
      cout<<ans+1<<endl;
      int i=ans;
      int j=ans+1;
      vector<int>res;
      while(k>0)
      {
       if(i<0||(j<n&&abs(arr[j]-x)<abs(arr[i]-x)))
       {
         j++;
       }
        else
        {
          i--;
        }
        k--;
      }
      for(int idx=i+1;idx<j;idx++)
      {
        res.push_back(arr[idx]);
      }
      return res;
    }
};
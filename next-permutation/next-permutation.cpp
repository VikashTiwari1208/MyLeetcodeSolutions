class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        if(n<=1)
        {
            return ;
        }
        int idx=-1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                idx=i;
            }
        }
        if(idx==-1)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        int j=n-1;
        while(j>idx&&arr[j]<=arr[idx])
        {
            j--;
        }
        swap(arr[idx],arr[j]);
        reverse(arr.begin()+idx+1,arr.end());
    }
};
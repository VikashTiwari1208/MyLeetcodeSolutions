class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        while(arr.size()>1)
        {
            int minprd=INT_MAX;
            int mini_idx=-1;
            for(int i=1;i<arr.size();i++)
            {
                int temp=arr[i]*arr[i-1];
                if(temp<minprd)
                {
                    minprd=temp;
                    mini_idx=(arr[i-1]>arr[i])?(i):(i-1);
                }
            }
            ans+=minprd;
            arr.erase(arr.begin()+mini_idx);
        }
        return ans;
    }
};
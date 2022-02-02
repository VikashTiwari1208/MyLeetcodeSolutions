class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>ans;
        for(int i=0;i<n;i++)
        {
            
            int j=i+1;
            ans.insert(arr[i]);
            int val=0;
            int val2=arr[i];
            while(j<n)
            {
                if((val|arr[j])==(val2|arr[j]))
                {
                    break;
                }
                val=val|arr[j];
                val2=val2|arr[j];
                ans.insert(val2);
                j++;
            }
        }
        return ans.size();
    }
};
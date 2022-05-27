class Solution {
public:
    static bool comp(int a,int b)
    {
        if(abs(a)<abs(b))
        {
            return true;
        }
        return false;
    }
    bool canReorderDoubled(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>cnt;
        for(auto x:arr)
        {
            cnt[x]++;
        }
        sort(arr.begin(),arr.end(),comp);
        for(int i=0;i<n;i++)
        {
            int val=arr[i];
            if(cnt[val]==0)
            {
                continue;
            }
            if(cnt[val]>0&&cnt[2*val]==0)
            {
                return false;
            }
            cnt[val]--;
            cnt[2*val]--;
        }
        return true;
    }
};
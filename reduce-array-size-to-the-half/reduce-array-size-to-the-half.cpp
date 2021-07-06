class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>cnt;
        for(auto x:arr)
        {
            cnt[x]++;
        }
        int ans=0;
        int sum=0;
        int n=arr.size();
        priority_queue<int>pq;
        for(auto x:cnt)
        {
            pq.push(x.second);
        }
        while(sum<(n/2)&&pq.size())
        {
            sum+=pq.top();
            ans++;
            pq.pop();
        }
        return ans;
    }
};
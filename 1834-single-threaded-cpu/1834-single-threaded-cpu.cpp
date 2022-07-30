class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            tasks[i].push_back(i);
        }
        priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,greater<pair<long long int,long long int>>>pq;
        
        sort(tasks.begin(),tasks.end());
        int i=0;
        int time=0;
        while(i<n||pq.size()>0)
        {
            if(pq.size()==0)
            {
                time=max(time,tasks[i][0]);
               // i++;
            }
            while(i<n&&tasks[i][0]<=time)
            {
               pq.push({tasks[i][1],tasks[i][2]});
                i++;
            } // jitne possible task they utne time mein pq mein dalo minimum nikalo
            auto x=pq.top();
            pq.pop();
            time+=x.first;
            ans.push_back(x.second);
        }
        return ans;
    }
};
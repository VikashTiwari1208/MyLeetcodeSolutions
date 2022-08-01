class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        int day=1;
        int ans=0;
        int n=apples.size();
        for(int i=0;i<n;i++)
        {
            if(apples[i]>0&&days[i]>0)
            {
                pq.push({i+days[i]+1,apples[i]});
            }
              while(pq.size()>0&&pq.top().first<=day)
                {
                    pq.pop();
                }
                if(pq.size()>0)
                {
                   auto x=pq.top();
                    pq.pop();
                    int apple=x.second;
                    ans++;
                    apple--;
                    if(apple>0)
                    {
                        pq.push({x.first,apple});
                    }
                }
            day++;
        }
        while(pq.size()>0)
        {
               while(pq.size()>0&&pq.top().first<=day)
                {
                    pq.pop();
                }
                if(pq.size()>0)
                {
                   auto x=pq.top();
                    pq.pop();
                    int apple=x.second;
                    ans++;
                    apple--;
                    if(apple>0)
                    {
                        pq.push({x.first,apple});
                    }
                }
            day++;
        }
        return ans;
    }
};
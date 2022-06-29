class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > free,busy;
        for(int i=0;i<servers.size();i++)
        {
            free.push({servers[i],i});
        }
       
        int n=tasks.size();
         vector<int> ans(n);
        int time=0;
        for(int i=0;i<n;i++)
        {
            time=max(time,i);
            if(free.empty()==true)
            {
               auto  x=busy.top(); // busy se nikalkr push kia;
                busy.pop();
                time=x.first; // itna time wait krna pdega busy ko free krne mein
                free.push({servers[x.second],x.second});
            }
            while(busy.empty()==false&&busy.top().first<=time)
            {
                auto x=busy.top();
                busy.pop();
                free.push({servers[x.second],x.second});
            }
            auto x=free.top();
            ans[i]=x.second;
            free.pop(); // free wale ko assign krdia
            // add it to running;
            busy.push({time+tasks[i],x.second});
        }
        
        
        return ans;   
        
    }
};
class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        
        queue<int> pendingTasks;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > freeServers, busyServers;
        
        vector<int> ans;
        int timer = 0;
        
        for(int i = 0; i < servers.size(); i++) {
            freeServers.push({servers[i], i}); 
        }
        for(int j = 0; j < tasks.size(); j++) {
            pendingTasks.push(j);
        }
        
       
        while(!pendingTasks.empty()) {
			
            while(!busyServers.empty() and busyServers.top().first <= timer) {
                auto p = busyServers.top();
                busyServers.pop();
                freeServers.push({servers[p.second], p.second});
            }
            
        
            while(!freeServers.empty() and !pendingTasks.empty() and pendingTasks.front() <= timer) {
                int i = pendingTasks.front();
                auto p = freeServers.top();
                freeServers.pop();
                busyServers.push({timer + tasks[i], p.second}); 
                pendingTasks.pop();
                ans.push_back(p.second);
            }
            if(freeServers.empty()) {
                timer = busyServers.top().first;
                continue;
            }
            timer++;
        }
        
        return ans;   
        
    }
};
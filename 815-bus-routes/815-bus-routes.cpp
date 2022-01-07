class Solution {
public:
   
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
      int n = routes.size();
        unordered_map<int, unordered_set<int>> mp;
        
        for(int i=0; i<n; i++){
            for(int& j: routes[i]) mp[j].insert(i);
        }
        
        if(mp.find(source) == mp.end() || mp.find(target) == mp.end()) return -1;
        if(target == source) return 0;
        
        vector<vector<int>> adj(501);
        for(int u=0; u<n; u++){
            for(int& stop: routes[u]){
                for(auto& v: mp[stop]){
                    adj[u].push_back(v);
                    adj[v].push_back(u);
                }
            }
        }
        
        queue<int> q;
        vector<bool> visited(501, false);
        for(auto& start: mp[source]){
            q.push(start);
            visited[start] = true;
        }
        int minCount = 1;
        
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int u = q.front();
                q.pop();
                //cout << u << endl;
                if(mp[target].find(u) != mp[target].end()) return minCount;
                for(int& v: adj[u]){
                    if(visited[v] != true){
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
            minCount ++;
        }
        
        return -1;
    }
};
class Solution {
public:
    struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,Comp>pq;
        map<string,int>mp;
        vector<string>ans;
        for(auto x:words)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
            
        }
       
        while(pq.size()&&k--)
        {
            auto x=pq.top();
            pq.pop();
            ans.push_back(x.second);
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            for(auto x:nums[i])
            {
                v.push_back({x,i});
            }
        }
        sort(v.begin(),v.end());
       
        unordered_map<int,int>mp;
        vector<int>ans;
        int i=0;
        int j=0;
        int cnt=0;
        int sz=v.size();
        while(i<sz)
        {
            if(mp[v[i].second]==0)
            {
                mp[v[i].second]++;
                cnt++;
            }
            else
            {
                mp[v[i].second]++;
            }
                while(cnt==n&&j<sz)
                {
                     //cout<<cnt<<" "<<i<<" "<<j<<endl;   
                    if(cnt==n)
                    {
                       if(ans.size()==0||(ans[1]-ans[0])>(v[i].first-v[j].first))
                      {
                                // cout<<"here"<<" "<<cnt<<" "<<i<<" "<<j<<endl;             
                           ans=vector<int>{v[j].first,v[i].first};
                      }
                    }
                    mp[v[j].second]--; 
                    if(mp[v[j].second]==0)
                    {
                        cnt--;
                        //break;
                    }
                    j++;
                    //cout<<cnt<<" "<<i<<" "<<j<<endl;
                }
            i++;
        }
        return ans;
    }
};
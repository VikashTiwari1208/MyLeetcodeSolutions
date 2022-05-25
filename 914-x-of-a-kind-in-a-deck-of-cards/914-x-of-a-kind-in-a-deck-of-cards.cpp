class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        for(auto x:deck)
        {
            mp[x]++;
        }
        int xx=INT_MAX;
        for(auto x:mp)
        {
            xx=min(xx,x.second);
        }
        if(xx<=1)
        {
            return false;
        }
        for(int i=2;i<=10000;i++)
        {
            bool flag=true;
            for(int j=0;j<deck.size();j++)
            {
                if(mp[deck[j]]%i)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                return true;
            }
        }
            return false;
    }
};
class Solution {
public:
    int stoneGameVI(vector<int>& alice, vector<int>& bob) {
        int n=alice.size();
        vector<pair<int,pair<int,int>>>temp(n);
        for(int i=0;i<n;i++)
        {
            temp[i]={alice[i]+bob[i],{alice[i],bob[i]}};
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        int res1=0,res2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                res1+=temp[i].second.first;
            }
            else
            {
                res2+=temp[i].second.second;
            }
        }
        if(res1>res2)
        {
            return 1;
        }
        if(res1<res2)
        {
            return -1;
        }
        return 0;
    }
};
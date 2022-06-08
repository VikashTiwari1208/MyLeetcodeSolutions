class Solution {
public:
    vector<int> par;
    vector<int> rank;
    int find(int x)
    {
        if(par[x]==-1)
        {
            return x;
        }
        return par[x]=find(par[x]);
    }
    void merge(int a,int b)
    {
       int s1 = find(a), s2 = find(b);
        if(s1 != s2){
            if(rank[s1] < rank[s2]){
                par[s1] = s2;
                rank[s2] += rank[s1];
            }
            else{
                par[s2] = s1;
                rank[s1] += rank[s2];
            }
        }
    }
    bool gcdSort(vector<int>& nums) {
        int n=nums.size();
        par.resize((int)1e5+2,-1);
        rank.resize((int)1e5+2,1);
        for(int i=0;i<n;i++)
        {
            int val=nums[i];
            for(int i=2;i*i<=val;i++)
            {
                if((val%i)==0)
                {
                    merge(val,i);
                    merge(val,val/i);
                }
            }
        }
        vector<int> temp;
        temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++)
        {
         //cout<<find(nums[i])<<" "<<find(temp[i])<<endl;
            if(find(nums[i])!=find(temp[i]))
           {
               return false;
           }
           
        }
        return true;
    }
};
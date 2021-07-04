class Solution {
public:
    int eliminateMaximum(vector<int>& dis, vector<int>& speed) {
        int n=dis.size();
      for(int i=0;i<n;i++)
      {
        dis[i]=ceil(1.0*dis[i]/speed[i]); 
      }
      sort(dis.begin(),dis.end());
      for(auto x:dis)
      {
        cout<<x<<" ";
      }
      int curr=0;
      for(int i=0;i<n;i++)
      {
        if(dis[i]<=curr)
        {
          return curr;
        }
        else
        {
          curr++;
        }
      }
      return n;
    }
};
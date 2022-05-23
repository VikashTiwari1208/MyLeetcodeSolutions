class Node{
    public:
    int node;
    int mask;
    int dis;
    Node(int node, int mask, int cost)
        {
            this -> node = node;
            this -> mask = mask;
            this -> dis = cost;
        }
};

class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
       int n=graph.size();
        set<pair<int,int>>vis;
        queue<Node>q;
        int final_mask=(1<<n)-1;
      //  cout<<final_mask<<endl;
        int initial_mask=0;
        for(int i=0;i<n;i++)
        {
            int mask=(1<<i);
           // cout<<mask<<" ";
            Node x=Node(i,mask,1);
            q.push(x);
            vis.insert({i,mask});       
        }
        cout<<endl;
        while(q.empty()==false)
        {
            
            Node x=q.front();
            q.pop();
         //   cout<<x.node<<" "<<x.mask<<" ";
            if(x.mask==final_mask)
            {
                return x.dis-1;
            }
            for(auto v:graph[x.node])
            {
                
                int new_mask=x.mask;
                new_mask=new_mask|(1<<v);
                if(vis.find({v,new_mask})==vis.end())
                {
                  //  cout<<v<<" "<<new_mask<<" "<<x.dis+1<<endl;
                    Node new_node=Node(v,new_mask,x.dis+1);
                    q.push(new_node);
                    vis.insert({v,new_mask});
                }
            }
        }
        return 1;
    }
};
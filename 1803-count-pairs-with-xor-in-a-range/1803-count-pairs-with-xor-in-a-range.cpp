struct Node {
  Node * links[2]={NULL};
  int cnt=0;
  bool contain(int ind) {
    return (links[ind] != NULL);
  }
  Node * get(int ind) {
    return links[ind];
  }
  void put(int ind, Node * node) {
    links[ind] = node;
  }
};
class Trie {
    private: Node * root;
   public:
    Trie() {
      root = new Node();
    }
 
  public:
    void insert(int num) {
      Node * node = root;
      // cout << num << endl; 
      for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (!node -> contain(bit)) {
          node -> put(bit, new Node());
        }
           
        node = node -> get(bit);
         node->cnt++;
      }
         
    }
    int findcnt(int num,int limit) {
     Node* curr=root;
        int ans=0;
       for(int i=31;i>=0;i--)
       {
           int bit=(limit>>i)&1;
           int valbit=(num>>i)&1;
           if(bit==1)
           {
               if(curr&&curr->contain(valbit))
               {
                   ans+=curr->get(valbit)->cnt;
               }
               if(curr)
               {
                    curr=curr->get(valbit^1);
               }
           }
           else
           {
                 if(curr)
               {
                  // ans+=curr->get(valbit)->cnt;
                   curr=curr->get(valbit);
               }
           }
       }
        return ans;
    }
};
class Solution {
public:
    int countPairs(vector<int>& nums, int low, int high) {
         int ans=0;
        Trie t;
        for(auto x:nums)
        {
            ans+=t.findcnt(x,high+1)-t.findcnt(x,low);
            t.insert(x);
        }
        return ans;
    }
};
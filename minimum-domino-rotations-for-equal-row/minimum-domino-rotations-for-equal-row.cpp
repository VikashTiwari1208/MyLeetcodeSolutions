class Solution {
public:
    int minDominoRotations(vector<int>& top, vector<int>& bottom) {
        int n=top.size();
        int ans=INT_MAX;
        bool flag=false;
       for(int i=1;i<=6;i++)
       {
           bool flag1=true;
           int op1=0;
           int op2=0;
            for(int j=0;j<n;j++)
           {
            if(top[j]!=i&&bottom[j]!=i)
            {
                flag1=false;
                break;
            }
             else
             {
                 if(top[j]!=i&&bottom[j]==i)
                 {
                     op1++;
                 }
                 if(top[j]==i&&bottom[j]!=i)
                 {
                     op2++;
                 }
             }
           }
           if(flag1)
           {
               flag=true;
               ans=min({ans,op1,op2});
           }
       }
        if(flag==false)
        {
            return -1;
        }
        return ans;
    }
};
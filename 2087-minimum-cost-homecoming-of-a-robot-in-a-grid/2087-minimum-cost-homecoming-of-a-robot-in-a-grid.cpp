class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int ans=0;
        int strtrow=startPos[0];
        int strtcol=startPos[1];
        int endrow=homePos[0];
        int endcol=homePos[1];
         if(strtcol>endcol)
         {
             while(strtcol!=endcol)
             {
                 ans+=colCosts[strtcol-1];
                 strtcol--;
             }
         }
        if(strtcol<endcol)
         {
             while(strtcol!=endcol)
             {
                 ans+=colCosts[strtcol+1];
                 strtcol++;
             }
         }
        if(strtrow>endrow)
         {
             while(strtrow!=endrow)
             {
                 ans+=rowCosts[strtrow-1];
                 strtrow--;
             }
         }
        if(strtrow<endrow)
         {
             while(strtrow!=endrow)
             {
                 ans+=rowCosts[strtrow+1];
                 strtrow++;
             }
         }
        return ans;
    }
};
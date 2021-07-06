bool compare(vector<int>&a,vector<int>&b)
   {
       if(a[0]<b[0])
       {
           return true;
       }
       return a[1]<=b[1];
   }
class Solution {
public:
   
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int cnt=0;
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
            {
                cnt++;
            }
            else
            {
                end=intervals[i][1];
            }
        }
        
        return cnt;
    }
};
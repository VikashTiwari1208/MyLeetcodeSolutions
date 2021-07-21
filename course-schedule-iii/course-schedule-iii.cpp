bool cmp(vector<int>a,vector<int>b)
{
  if(a[1]<b[1])
  {
      return true;
  }
return false;
}
class Solution {
public:
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        int n=courses.size();
        int curr_time=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
             pq.push(courses[i][0]);
            int curr_endtime=courses[i][1];
            curr_time+=courses[i][0];
            if(curr_time>curr_endtime)
            {
                curr_time-=pq.top();
                pq.pop();
            }
           
        }
        return pq.size();
    }
};
class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(),clips.end());
        int cnt=0;
         int max_end=0;
        int i=0;
        while(max_end<time)
        {
            int curr_max=0;
            while(i<clips.size()&&clips[i][0]<=max_end)
            {
                curr_max=max(curr_max,clips[i][1]);
                i++;
            }
            if(curr_max<=max_end)
            {
                return -1;
            }
            else
            {
                max_end=curr_max;
               cnt++;
            }
        }
        return cnt;
    }
};
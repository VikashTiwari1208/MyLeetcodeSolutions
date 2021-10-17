class Solution {
public:
    int reachNumber(int target) {
        if(target<0)
        {
            target=-target;
        }
        int cnt=0;
        int sum=0;
        while(true)
        {
            cnt++;
            sum+=cnt;
            if(sum==target)
            {
                return cnt;
            }
            if(sum>target&&(sum-target)%2==0)
            {
                return cnt;
            }
        }
    }
};
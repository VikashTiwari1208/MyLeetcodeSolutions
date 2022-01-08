class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& sec, int time) {
        int n=sec.size();
        vector<int>predec(n,1);
        vector<int>preinc(n,1);
        for(int i=1;i<n;i++)
        {
            if(sec[i]<sec[i-1])
            {
                predec[i]=predec[i-1]+1;
                preinc[i]=1;
            }
            else if(sec[i]==sec[i-1])
            {
                predec[i]=predec[i-1]+1;
                preinc[i]=preinc[i-1]+1;
            }
            else
            {
                predec[i]=1;
                preinc[i]=preinc[i-1]+1;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(i-time>=0&&i+time<=n-1)
            {
                if((predec[i]-predec[i-time]==time)&&(preinc[i+time]-preinc[i]==time))
                {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& list) {
        set<string>s;
        for(auto x:list)
        {
            s.insert(x);
        }
        if(s.find(endword)==s.end())
        {
            return 0;
        }
        queue<string>q;
        q.push(beginword);
        int dis=1;
        while(q.empty()==false)
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                string top=q.front();
                q.pop();
                for(int i=0;i<top.length();i++)
                {
                    string temp=top;
                    for(char c='a';c<='z';c++)
                    {
                        temp[i]=c;
                        if(temp==endword)
                        {
                            return dis+1;
                        }
                        if(s.find(temp)!=s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
            dis++;
        }
        return 0;
    }
};
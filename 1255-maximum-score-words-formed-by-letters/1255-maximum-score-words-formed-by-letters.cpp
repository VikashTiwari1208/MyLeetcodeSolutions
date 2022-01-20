class Solution {
public:
    unordered_map<char,int>cnt;
    int max_score=0;
    unordered_map<string,bool>vis;
    vector<int>scorel;
    void subset(vector<string>& words,int idx)
    {
      if(idx==words.size())
      {
          update_score(words);
          return ;
      }
       vis[words[idx]]=true;
        subset(words,idx+1);
        vis[words[idx]]=false;
        subset(words,idx+1);
    }
    void update_score(vector<string>&words)
    {
        int temp_score=0;
        unordered_map<char,int>cntl;
        for(auto x:words)
        {
            if(vis[x]==true)
            {
                for(auto y:x)
                {
                    cntl[y]++;
                    temp_score+=scorel[y-'a'];
                    if(cntl[y]>cnt[y])
                    {
                        return ;
                    }
                }
            }
        }
        max_score=max(max_score,temp_score);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score)  
    {
      scorel=score;
        for(auto x:letters)
        {
            cnt[x]++;
        }
        subset(words,0);
        return max_score;
    }
};
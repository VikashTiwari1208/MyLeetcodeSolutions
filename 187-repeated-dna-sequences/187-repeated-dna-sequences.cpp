class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       
        vector<string>ans;
        if(s.length()<=10)
        {
            return ans;
        }
        unordered_map<string,int>cnt;
        string temp="";
        for(int i=0;i<10;i++)
        {
            temp+=s[i];
        }
        cnt[temp]++;
        for(int i=10;i<s.length();i++)
        {
            temp.erase(temp.begin());
            temp+=s[i];
            cnt[temp]++;
        }
        for(auto x:cnt)
        {
            if(x.second>1)
            {
                ans.push_back(x.first);
            }
        }
    return ans;
    }
};
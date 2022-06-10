class Solution {
public:
    long long subArrayRanges(vector<int>& v) {
          long long int ans=0;
          int n=v.size();
        vector<int>ple(n,-1),nle(n,n),pge(n,-1),nge(n,n);
        stack<int>s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(s.empty()==false&&v[s.top()]>v[i])
            {
                s.pop();
            }
            if(s.empty()==false)
            {
                ple[i]=s.top();
            }
            s.push(i);
        }
         while(!s.empty()){s.pop();}
        s.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false&&v[s.top()]>=v[i])
            {
                s.pop();
            }
            if(s.empty()==false)
            {
                nle[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){s.pop();}
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(s.empty()==false&&v[s.top()]<v[i])
            {
                s.pop();
            }
            if(s.empty()==false)
            {
                pge[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){s.pop();}
        s.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false&&v[s.top()]<=v[i])
            {
                s.pop();
            }
            if(s.empty()==false)
            {
                nge[i]=s.top();
            }
            s.push(i);
        }
        for(int i=0;i<n;i++)
        {
           long long int g=(i-pge[i])*(nge[i]-i);
            long long int l=(i-ple[i])*(nle[i]-i);
          //  cout<<i<<" "<<l<<" "<<g<<endl;
            ans+=(g-l)*v[i];
        }
        return ans;
    }
};
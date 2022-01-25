// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int n){
        vector<int>v;
        if(n<=2)
        {
            v.push_back(n);
            return v;
        }
string s="2",p="2";
int carry=0;
for(int i=3;i<=n;i++)
{   s=p;
p="";
carry=0;

    for(int j=0;j<s.size();j++)
      {  //cout<<s[j]-48<<" ";
          int x=(s[j]-48)*i + carry;
         // cout<<x<<" ";
        int r=x%10;
        carry=x/10;
        
        
        char rc=r+48;
       
       p+=rc;
          
      }
        if(carry){ 
         
         while(carry)
         {
             int r=carry%10;
             carry=carry/10;
             
             p+=char(r+48);
         }
       
        }
       
      
}
 
//cout<<s<<" "<<p<<" ";
for(int i=p.size()-1;i>=0;i--)
{
    v.push_back(p[i]-48);
}
return v;

    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
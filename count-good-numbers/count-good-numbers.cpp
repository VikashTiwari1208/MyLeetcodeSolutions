int  M=1000000007;
class Solution {
public:
int mod=1e9+7;
    long long pow(int x , long long y){
        if(y==0) return 1;
        long long ans=pow(x,y/2)%mod;
        if(y%2==1) return ans*ans*x;
        return ((ans%mod)*(ans%mod))%mod;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n-even;
        long long x=(pow(5,even)%mod);
        long long y=(pow(4,odd)%mod);
        long long ans= (x*y)%mod;
        return ans;
    }
};
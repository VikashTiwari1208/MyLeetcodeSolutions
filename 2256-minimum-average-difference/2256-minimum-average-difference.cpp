class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
    vector <long long int> v(n,0);
    v[0]=nums[0];
    for(int i=1; i<n; i++){
        v[i]=v[i-1]+nums[i];
    }
    int ans=0;
    int max=INT_MAX;
    for(int i=0; i<n-1; i++){
        long long int x=v[i]/(i+1);
        long long int y=v[n-1]-v[i];
        y=y/(n-i-1);
        if(max>abs(y-x)){
            ans=i;
            max=abs(x-y);
        }
    }
    if(max>v[n-1]/n){
        ans=n-1;
    }
    return ans;
    }
};
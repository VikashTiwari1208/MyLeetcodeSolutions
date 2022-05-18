class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1)
        {
            return 0;
        }
        int buy[n];
        int sell[n];
        buy[0]=-prices[0]; // max profit if i buy at 0th day kyunki buy kr rhe h to profit km hoga isliye - lgaya
        sell[0]=0; //starting mein kuch bech hi nhi skte to prfit sell krne pr 0
        buy[1]=max(buy[0],-prices[1]);
        sell[1]=max(buy[0]+prices[1],sell[0]);
        for(int i=2;i<n;i++)
        {
            buy[i]=max(sell[i-2]-prices[i],buy[i-1]);// i wala khrid rha h to do option
            // 1. last bar jb becha uska profit - current wali k price
            //2.  kuch kia hi na ho;
            sell[i]=max(sell[i-1],buy[i-1]+prices[i]);
        }
        return sell[n-1];
    }
};
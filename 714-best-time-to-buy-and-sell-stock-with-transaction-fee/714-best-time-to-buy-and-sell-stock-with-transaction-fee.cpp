class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int buy;int sell;
        buy=-prices[0];
        sell=0;
        for(int i=1;i<n;i++)
        {
            int temp=buy;
            buy=max(buy,sell-prices[i]);
            sell=max(sell,prices[i]-fee+temp);
        }
        
        return sell;
    }
};
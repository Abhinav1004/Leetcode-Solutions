class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;
        int buyPrice = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buyPrice)
            buyPrice = prices[i];
            else{
                profit = max(profit,prices[i]-buyPrice);
            }
        }
        if(profit==INT_MIN)
        return 0;
        return profit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>minVal){
                profit+=prices[i]-minVal;
            }
            minVal = prices[i];
        }
        return profit;
    }
};
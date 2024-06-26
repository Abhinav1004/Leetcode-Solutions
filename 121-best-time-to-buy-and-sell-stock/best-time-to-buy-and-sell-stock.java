import java.util.*;
class Solution {
    public int maxProfit(int[] prices) {
        int minVal = prices[0];int profit = 0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]>=minVal)
            {
                profit=Math.max(profit,prices[i]-minVal); 
            }
            else{
                minVal = prices[i];
            }
        }
        return profit;
    }
}
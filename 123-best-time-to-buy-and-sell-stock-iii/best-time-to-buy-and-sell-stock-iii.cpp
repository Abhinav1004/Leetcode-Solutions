class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = 2;int n=prices.size();
        vector<int> prevDiff(k+1,INT_MIN);
        vector<int> profit(k+1,0);
        for(int j=0;j<n;j++){
            for(int i=1;i<=k;i++){
                prevDiff[i]=max(prevDiff[i],profit[i-1]-prices[j]);
                profit[i] = max(profit[i],prices[j]+prevDiff[i]);
            }
        }
        return profit[k];
    }
};
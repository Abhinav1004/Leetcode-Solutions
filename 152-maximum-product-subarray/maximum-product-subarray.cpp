class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int maxProd = nums[0];
        for(int i=1;i<nums.size();i++){
            int temp = max({nums[i],curMax*nums[i],curMin*nums[i]});
            curMin = min({nums[i],curMin*nums[i],curMax*nums[i]});
            curMax = temp;
            maxProd = max(maxProd,curMax);
        }
        return maxProd;
    }
};
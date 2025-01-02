class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;int start=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[i++],nums[start++]);
            }
            else
            i++;
        }
    }
};
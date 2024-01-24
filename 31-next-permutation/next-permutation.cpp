class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int i = nums.size()-1;
        while(i>0 && (nums[i]<=nums[i-1]))
        i--;
        if(i>0){
            int pivot = i-1;int j;
            for(j=nums.size()-1;j>i;j--){
                if(nums[j]>nums[pivot]){
                    break;
                }
            }
            swap(nums[j],nums[pivot]);
            reverse(nums.begin()+i,nums.end());
        }
        else{
            sort(nums.begin(),nums.end());
        }
    }
};
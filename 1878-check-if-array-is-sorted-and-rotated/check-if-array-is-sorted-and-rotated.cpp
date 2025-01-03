class Solution {
public:
    void reverse(vector<int>& nums,int start,int end){
        int i;int j;
        for(i=start,j=end;i<j;i++,j--){
            swap(nums[i],nums[j]);
        }
    }
    bool check(vector<int>& nums) {
    int pivot = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>=nums[i-1]){
            pivot = i;
        }
        else
        break;
    }
    reverse(nums,0,pivot);
    reverse(nums,pivot+1,nums.size()-1);
    reverse(nums,0,nums.size()-1);
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1])
        return false;
    }
    return true;
    }
};
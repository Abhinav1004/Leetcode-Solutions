class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0;
        int i=0;
        while(i<nums.size()){
            if(nums[start]!=nums[i]){
                swap(nums[i++],nums[++start]);
            }
            else
            i++;
        }
        return start+1;
        // int k = max(0,start-1);
        // return k;
    }
};
class Solution {
    public int removeDuplicates(int[] nums) {
     int count = 1;
     for(int i=0;i<nums.length-1;){
        int k = i+1;
        while(k<nums.length){
            if(nums[k]==nums[i]){
                k++;
            }
            else{
                nums[count] = nums[k];
                count+=1;
                i=k;
            }
        }
        if(i!=k)
            i+=1;
     }
     return count;   
    }
}
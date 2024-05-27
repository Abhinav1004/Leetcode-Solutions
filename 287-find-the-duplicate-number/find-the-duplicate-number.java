class Solution {
    public int findDuplicate(int[] nums) {
     int start = 0;Boolean flag=true;
     int slow = 0;int fast = 0;
     while(slow!=fast || flag){
        slow = nums[slow];
        fast = nums[nums[fast]];
        
        if(flag)
        flag=!flag;
     }   
     slow = 0;
     while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
     }
     return slow;
    }
}
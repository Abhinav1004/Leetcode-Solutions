class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int flag=1;
        while((slow!=fast) || flag){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(flag)
                flag=0;
        }
        slow=0;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
class Solution {
    int findElement(int[] ar ,int start,int end,int target){
        if(start<=end){
            int mid = (start+end)/2;
            if(ar[mid]==target){
                return mid;
            }
            else if(ar[mid]>target)
            return findElement(ar, start, mid-1, target);
            else
             return findElement(ar, mid+1, end, target);
        }
        return -1;
    }
    public boolean search(int[] nums, int target) {
     int pivot = 0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>=nums[i-1])
            pivot=i;
            else
            break;
        }
        int l1 = findElement(nums,0,pivot,target);
        int l2 = findElement(nums,pivot+1,nums.length-1,target);
        return ((l1!=-1) || (l2!=-1));   
    }
}
class Solution {
    int binarySearch(int[] ar,int start,int end,int value){
        if(start<=end){
            int mid = (end+start)/2;
            if(ar[mid]==value)
                return mid;
            else if(ar[mid]<value)
                return binarySearch(ar, mid+1, end, value);
            else if(ar[mid]>value)
            return binarySearch(ar, start, mid-1, value);
        }
        return -1;
    }
    public int search(int[] nums, int target) {
        return binarySearch(nums,0,nums.length-1,target);
    }
}
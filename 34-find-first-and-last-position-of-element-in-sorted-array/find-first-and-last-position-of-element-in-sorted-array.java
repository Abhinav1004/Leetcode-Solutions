class Solution {
    int findFirstOccurence(int[] ar ,int start,int end,int target){
        if(start<=end){
            int mid = (start+end)/2;
            if(ar[mid]==target){
               int first = findFirstOccurence(ar, start, mid-1, target);
               if(first!=-1)
                return first;
                else
                return mid;
            }
            else if(ar[mid]>target)
            return findFirstOccurence(ar, start, mid-1, target);
            else
             return findFirstOccurence(ar, mid+1, end, target);
        }
        return -1;
    }
    int findLastOccurence(int[] ar ,int start,int end,int target){
        if(start<=end){
            int mid = (start+end)/2;
            if(ar[mid]==target){
               int last = findLastOccurence(ar, mid+1, end, target);
               if(last!=-1)
                return last;
                else
                return mid;
            }
            else if(ar[mid]>target)
            return findLastOccurence(ar, start, mid-1, target);
            else
             return findLastOccurence(ar, mid+1, end, target);
        }
        return -1;
    }

    public int[] searchRange(int[] nums, int target) {
        Solution obj = new Solution();
        int start_index = obj.findFirstOccurence(nums,0,nums.length-1,target);

        int end_index = obj.findLastOccurence(nums,0,nums.length-1,target);
        int[] result = new int[2];
        result[0] = start_index;
        result[1] = end_index;
        return result;
    }
}
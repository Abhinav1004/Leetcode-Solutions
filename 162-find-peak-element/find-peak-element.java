class Solution {
    int findPeakElementUtil(int[] ar ,int start,int end){
        if(start<=end){
            int mid = (start+end)/2;
            if((mid-1>=0 && ar[mid-1]<ar[mid]) && (mid+1<ar.length && ar[mid+1]<ar[mid])){
                return mid;
            }
            else if(ar.length==1)
            return 0;
            else if(mid==0 && (mid+1<ar.length && ar[mid+1]<ar[mid]))
            return mid;
            else if((mid==ar.length-1) &&(mid-1>=0 && ar[mid-1]<ar[mid]))
            return mid;
            int left_index = findPeakElementUtil(ar, start, mid-1);
            int right_index = findPeakElementUtil(ar, mid+1, end);
            if(left_index!=-1)
            return left_index;
            else if(right_index!=-1)
            return right_index;
        }
        return -1;
    }
    public int findPeakElement(int[] nums) {
        return findPeakElementUtil(nums,0,nums.length-1);
    }
}
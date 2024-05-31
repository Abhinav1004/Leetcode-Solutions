class Solution {

    void swapElements(int[] ar,int i,int j){
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
    void reverseArraySegment(int[] ar,int pos){
        int j = ar.length-1;
        while(pos<j){
            swapElements(ar, pos, j);
            pos++;
            j--;
        }
    }

    public void nextPermutation(int[] nums) {
        int i=nums.length-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        if(i>=0){
            int j = nums.length-1;
            while(j>=0 && nums[j]<=nums[i]){
                j--;
            }
            if(j>=0)
            swapElements(nums,i,j);
        }
        reverseArraySegment(nums,i+1);
    }
}
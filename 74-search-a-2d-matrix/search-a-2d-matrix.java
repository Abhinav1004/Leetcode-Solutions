class Solution {
    int findElement(int[][] ar ,int row_index,int start,int end,int target){
        if(start<=end){
            int mid = (start+end)/2;
            if(ar[row_index][mid]==target){
                return mid;
            }
            else if(ar[row_index][mid]>target)
            return findElement(ar,row_index, start, mid-1, target);
            else
             return findElement(ar,row_index, mid+1, end, target);
        }
        return -1;
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        for(int i=0;i<matrix.length;i++){
            int row_length = matrix[i].length;
            if(matrix[i][0]<=target && matrix[i][row_length-1]>=target){

                int searchIndex = findElement(matrix,i,0,row_length-1,target);
                if(searchIndex!=-1)
                return true;
                // for(int j=0;j<row_length;j++){
                //     if(matrix[i][j]==target)
                //     return true;
                // }
            }
            else 
            continue;
        }
        return false;
    }
}
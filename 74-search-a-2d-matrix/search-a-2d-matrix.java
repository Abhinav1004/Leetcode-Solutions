class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        for(int i=0;i<matrix.length;i++){
            int row_length = matrix[i].length;
            if(matrix[i][0]<=target && matrix[i][row_length-1]>=target){
                for(int j=0;j<row_length;j++){
                    if(matrix[i][j]==target)
                    return true;
                }
            }
            else 
            continue;
        }
        return false;
    }
}
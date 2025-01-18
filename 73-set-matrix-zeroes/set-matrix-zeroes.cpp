class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row_index;
        vector<int> col_index;
        int m = matrix.size();int n = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row_index.push_back(i);
                    col_index.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<col_index.size();j++){
                matrix[i][col_index[j]]=0;
            }
        }
        for(int j=0;j<row_index.size();j++)
            {
                
            for(int i=0;i<n;i++){
                matrix[row_index[j]][i]=0;
                }
            }
    }
};
class Solution {
public:
    vector<int> findMissingRepeating(vector<int> arr){
        int missing_number = (arr.size()*(arr.size()+1))/2;
        int repeated_number = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]*=-1;
                missing_number-=abs(arr[i]);
            }
            else{
                repeated_number = abs(arr[i]);
            }
        }
        vector<int> v;
        v.push_back(repeated_number);
        v.push_back(missing_number);
        return v;
    }
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        vector<int> result = findMissingRepeating(v);
        return result;
    }
};
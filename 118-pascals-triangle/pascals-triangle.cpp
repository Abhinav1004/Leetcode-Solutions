class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int> > v;
    for(int i=0;i<n;i++){
        if(i==0){
            vector<int> ar;
            ar.push_back(1);
            v.push_back(ar);
        }
        else{
            int size = v[i-1].size();
            vector<int> ar;
            ar.push_back(1);
            for(int j=0;j<size-1;j++){
                int value = v[i-1][j]+v[i-1][j+1];
                ar.push_back(value);
            }
            ar.push_back(1);
            v.push_back(ar);
        }
    }
    return v;
    }
};
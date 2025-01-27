class Solution {
public:
    bool static compare(vector<int> a,vector<int> b){
        if(a[0]==b[0])
        return a[1]<b[1];
        else
        return a[0]<b[0];
    }
    void printInterval(vector<vector<int>>& v){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        // printInterval(intervals);
        int pos = 0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[pos][1]>=intervals[i][0]){
                intervals[pos][1] = max(intervals[pos][1],intervals[i][1]);
            }
            else{
                pos+=1;
                intervals[pos][0] = intervals[i][0];
                intervals[pos][1] = intervals[i][1];
            }
        }
        intervals.erase(intervals.begin()+pos+1,intervals.end());
        return intervals;
    }
};
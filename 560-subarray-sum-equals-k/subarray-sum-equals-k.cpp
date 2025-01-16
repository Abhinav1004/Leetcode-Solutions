class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int cur_sum = 0;int count = 0;
        m[cur_sum] = 1;
        for(int i=0;i<nums.size();i++){
            cur_sum+=nums[i];
            if(m.find(cur_sum-k)!=m.end()){
                count+=m[cur_sum-k];
            }
            m[cur_sum]+=1;
        }
        return count;
    }
};
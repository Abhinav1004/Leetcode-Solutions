class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int> > v;
        sort(nums.begin(),nums.end());
        if(nums.size()<4)
        return v;
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1])
                    continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                int start = j+1;
                int end = nums.size()-1;
                while(start<end){
                    long int two_sum = nums[start]+nums[end];
                    long int four_sum_val = nums[i]+nums[j]+two_sum;
                    if(four_sum_val==target){
                        vector<int> ar;
                        ar.push_back(nums[i]);
                        ar.push_back(nums[j]);
                        ar.push_back(nums[start]);
                        ar.push_back(nums[end]);
                        v.push_back(ar);
                        while(start<end && nums[start]==nums[start+1])
                            start+=1;
                        while(start<end && nums[end]==nums[end-1])
                            end-=1;
                        start+=1;
                        end-=1;
                    }
                    else if(four_sum_val<target){
                        start+=1;
                    }
                    else{
                        end-=1;
                    }
                }
            }
        }
        return v;
    }
};
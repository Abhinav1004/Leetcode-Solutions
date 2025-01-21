class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // set<vector<int> > s;
        vector<vector<int> > v;
        for(int i=0;i<nums.size()-2;i++){
            int first_val = nums[i];
            int start = i+1;
            int end = nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])
            continue;
            while(start<end){
                int two_sum_val = nums[start]+nums[end];
                int three_sum_val = nums[i]+two_sum_val;
                if(three_sum_val==0){
                    vector<int> ar;
                    ar.push_back(nums[i]);
                    ar.push_back(nums[start]);
                    ar.push_back(nums[end]);
                    v.push_back(ar);
                    while(start<end && nums[start]==nums[start+1])
                        start++;
                    while(start<end && nums[end]==nums[end-1])
                        end--;

                    start+=1;
                    end-=1;
                }
                else if(three_sum_val<0){
                    start+=1;
                }
                else
                    end-=1;
                }
            }
            return v;
        }
};
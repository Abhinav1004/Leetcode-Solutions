class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
            continue;
            else{
                nums[start++]=nums[i];
                s.insert(nums[i]);
                cout<<start<<" ";
            }
        }
        int k = max(start,0);
        return k;
    }
};
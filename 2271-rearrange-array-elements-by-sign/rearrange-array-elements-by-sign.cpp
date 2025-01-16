#include<queue>
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> odd_queue;
        queue<int> even_queue;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                even_queue.push(nums[i]);
            else
                odd_queue.push(nums[i]);
        }
        vector<int> result;int value;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                value = even_queue.front();
                even_queue.pop();
            }
            else{
                value = odd_queue.front();
                odd_queue.pop();
            }
            result.push_back(value);
        }
        return result;
    }
};
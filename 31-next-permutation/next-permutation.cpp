class Solution {
public:
    void reverse_array(vector<int>& ar,int start,int end){
        int i;int j;
        for(i=start,j=end;i<j;i++,j--){
            swap(ar[i],ar[j]);
        }
    }
    int find_smallest(vector<int> ar,int start,int end){
        int pivot_value = ar[start-1];
        int smallest_number = INT_MAX;
        int smallest_pos =  start;
        for(int i=end;i>=start;i--){
            if(ar[i]>pivot_value && ar[i]<smallest_number){
                smallest_number=ar[i];
                smallest_pos = i;
            }
        }
        return smallest_pos;
    }
    void nextPermutation(vector<int>& nums) {
     int pivot = -1;int i;int n = nums.size();
    for(i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        reverse_array(nums,0,n-1);
    }
    else
        {
            int ele_pos = find_smallest(nums,pivot+1,n-1);
            swap(nums[pivot],nums[ele_pos]);
            reverse_array(nums,pivot+1,n-1);
            // reverse(nums,nums.begin()+pivot+1,nums.end());
        }   
    }
};
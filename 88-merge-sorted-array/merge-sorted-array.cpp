class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j=nums2.size()-1;j>=0;j--){
            if(m==0)
            {
                for(int i=0;i<nums2.size();i++){
                nums1[i+m] = nums2[i];
                }
            }
            else
            {
                int key = nums1[m-1];int i=m-2;
                for(i=m-2;i>=0 && nums1[i]>=nums2[j];i--){
                    nums1[i+1] = nums1[i];
                }
                if((i!=m-2)||(key>nums2[j])){
                    nums1[i+1] = nums2[j];
                    nums2[j] = key;
                }
            }
        }
        
        for(int i=0;i<nums2.size();i++){
            nums1[i+m] = nums2[i];
        }
    }
};
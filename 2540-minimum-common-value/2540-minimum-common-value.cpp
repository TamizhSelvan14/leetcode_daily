class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        
        while(i<nums1.size() and j<nums2.size()){
            // cout<<"i - "<<i<<" j - "<<j<<endl;
            if(nums1[i] == nums2[j]){
                // cout<<"entered"<<endl;

                return nums1[i];
            }else if(nums1[i]<nums2[j]){
                i++;
                // cout<<"entered is"<<endl;
            }else if (nums1[i]>nums2[j]){
                j++;
            }
            
            
            
            
        }
        
        
        return -1;
    }
};
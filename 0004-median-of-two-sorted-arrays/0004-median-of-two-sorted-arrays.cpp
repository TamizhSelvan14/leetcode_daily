class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        
        
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        double a=0.0;
        
        if(ans.size()%2==0){
            
            a= (double)ans[ans.size()/2]+(double)ans[(ans.size()/2) -1 ];
           a=a/2.0;
        }else{
            a=(double)ans[ans.size()/2];
        }
        
        
        
        return a;
        
    }
};
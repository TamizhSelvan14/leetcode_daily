class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     
        vector<int> temp;
        
        int count=0;
           
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            count=count+nums[i];
            temp.push_back(count);
        }
        
        
        
     return temp;   
    }
};
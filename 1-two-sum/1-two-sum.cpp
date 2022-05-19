class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        vector<int> temp;
        
        unordered_map<int,int> hmp;
        
       for(int i=0;i<n;i++){
           
           
           //finding if target - nums[i] is there if yits there we can push it the already present element index and push the next element index
           
       if(hmp.find(target-nums[i])!=hmp.end()){
           
           temp.push_back(hmp[target-nums[i]]);
           temp.push_back(i);
           
           return temp;
           
           
       }    
       
       //updating the values tin hashmap
           hmp[nums[i]]=i;
           
           
       }
        
     
        
     
        return temp;
    }
};
class Solution {
public:
    
    void recur(vector<int> &nums,int index,int temp,int &result){
        
        if(index>=nums.size()){
            result+=temp;
            return;
        }
        
        recur(nums,index+1,temp,result);
        
        temp^=nums[index];
        
        recur(nums,index+1,temp,result);
        
    }
    
    
    int subsetXORSum(vector<int>& nums) {
        int result=0;
        // cout<<result;
        recur(nums,0,0,result);
        
        return result;
    }
};
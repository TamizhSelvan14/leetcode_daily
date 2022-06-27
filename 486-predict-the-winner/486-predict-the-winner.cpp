class Solution {
public:
    
    int solve(int i,int j,vector<int> &nums){
        
        if(i>j)
            return 0;
        
        
        //if we pick i=0 then 2 options i+1,j 
        //then we pick i+1 -> i+2,j and j-> i+1,j-1
        int option1=nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        
        //if we pick j=n-1 then 2 options i,j-1 
        //then we pick i -> i+2,j and j-1-> i,j-2
        int option2=nums[j]+min(solve(i+1,j-1,nums),solve(i,j-2,nums));
        
        //return max
        return max(option1,option2);
      
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        
        int total=accumulate(nums.begin(),nums.end(),0);
        int player1=solve(0,nums.size()-1,nums);
    
        
        
        int player2=total-player1;
        
        
        return player1>=player2;
    }
};
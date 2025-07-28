class Solution {
public:
void solve(vector<int> &nums,int maxOr,int curOr,int &count,int i){

    if(i==nums.size()){
        if(maxOr == curOr)
                count++;


        return;
        
    }

    
  

     solve(nums,maxOr,curOr|nums[i],count,i+1);
     solve(nums,maxOr,curOr,count,i+1);


}
    int countMaxOrSubsets(vector<int>& nums) {
        

        //neeed tp find maximum or of subsets or all

        int maxOr=0;

        for(int i=0;i<nums.size();i++){
            maxOr|=nums[i];
        }
        int count=0;

        solve(nums,maxOr,0,count,0);

        return count;

    }
};







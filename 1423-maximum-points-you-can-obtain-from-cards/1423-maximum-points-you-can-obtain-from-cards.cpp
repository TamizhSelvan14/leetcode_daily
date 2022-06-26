class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int currSum=0;
        int n=cardPoints.size();
        int sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
       int minSubarray=0;
        for(int i=0;i<n;i++){
        
            currSum+=cardPoints[i];
            
            if(i-(n-k)<0){
                minSubarray +=cardPoints[i];
            }else{
                currSum-=cardPoints[i-(n-k)];
                minSubarray=min(minSubarray,currSum);
            }
            
            
        }
        return sum-minSubarray;
    }
};
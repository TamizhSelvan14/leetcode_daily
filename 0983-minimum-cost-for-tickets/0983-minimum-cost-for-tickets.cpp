class Solution {
public:
    
    int solve(vector<int>& days, vector<int>& costs,int index, vector<int> &dp){
        
        if(index>=days.size())
            return 0;
        
        if(dp[index]!=-1)
            return dp[index];
        
        
        //3 picks per items per day,per week per month
        
        
        int day =costs[0]+solve(days,costs,index+1,dp);
        int i;
        for(i=index;i<days.size() and days[i]<days[index]+7;i++);
         int week = costs[1]+solve(days,costs,i,dp);

        
        for( i=index;i<days.size() and days[i]<days[index]+30;i++);
        int month =costs[2]+solve(days,costs,i,dp);

        
                                   

        
        return dp[index]=min({day,week,month});
        
        
    }
    
    
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(366,-1);
        return solve(days,costs,0, dp);
        
        
    }
};
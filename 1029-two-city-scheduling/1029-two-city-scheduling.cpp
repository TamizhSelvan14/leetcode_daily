class Solution {
public:
    int dp[1001][1001];
    int solve(vector<vector<int>>& costs,int a,int b){
        
        
        
        if(a+b>=costs.size())
            return 0;
        
        int side1=INT_MAX;
        int side2=INT_MAX;
        
        if(dp[a][b]!=-1)
            return dp[a][b];
        
        if(a<costs.size()/2)
        side1=costs[a+b][0]+solve(costs,a+1,b);
        
        if(b<costs.size()/2)
        side2=costs[b+a][1]+solve(costs,a,b+1);
        
        
       
            return dp[a][b]=min(side1,side2);
        
    }
    
    
    static bool comp(vector<int> &a,vector<int> &b){
        
        int profit1=a[1]-a[0];
        int profit2=b[1]-b[0];
        
        return profit1>profit2;
        
        
    }
    
    
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
//         memset(dp,-1,sizeof(dp));
        
//        return solve(costs,0,0);
        
        
        //divide first half and second half in a way such that makes profit if we reduce
        
        // add sort on based on 
        //     if arr[i][1]-arr[i][0] >0 ->first half na dsecond half add
        
        
        sort(costs.begin(),costs.end(),comp);
             
        
        // for(auto x:costs)
        //     cout<<x[0]<<" "<<x[1]<<endl;
        
            int ans=0;  
        for(int i=0;i<costs.size()/2;i++){
            ans+=costs[i][0];
        }
        
        
        for(int i=costs.size()/2;i<costs.size();i++){
            ans+=costs[i][1];
        }
                
        return ans;
        
    }
};
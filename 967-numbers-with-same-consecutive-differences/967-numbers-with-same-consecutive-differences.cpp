class Solution {
public:
    
    void solve(int length,int num,int curr,int k,vector<int>&ans){
        
        if(length==0)
        {
            ans.push_back(num);
            return;
        }        
        
        
        for(int i=0;i<=9;i++){
            
            if(abs(i-curr)==k){
                
                solve(length-1,num*10+i,i,k,ans);
                
            }
            
            
        }
        
        
        
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> ans;
        
        
        for(int i=1;i<=9;i++){
            
            solve(n-1,i,i,k,ans);
            
            
        }
        
        
        return ans;
        
        
    }
};
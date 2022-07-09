class Solution {
public:
    
    bool solve(vector<int>& arr, int i,vector<bool>& visited){
        
        if(i<0 or i>=arr.size() or visited[i]==true)
            return false;
        
        if(arr[i]==0)
            return true;
        
        visited[i]=true;
        bool negative=solve(arr,i-arr[i],visited);
        bool positive=solve(arr,i+arr[i],visited);
        
        return negative or positive;
    }
    
    
    
    
    bool canReach(vector<int>& arr, int start) {
        
        //visited arr to maek not repeation beacuse to terminate it
        vector<bool> visited(arr.size(),false);
        
       return solve(arr,start,visited);
    }
};
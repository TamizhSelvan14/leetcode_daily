class Solution {
public:
    
    bool palindrome(string s, int start,int end){
        
        while(start<=end){
            
            if(s[start]!=s[end]){
                return false;
            }
            start++;end--;
            
        }
        
        return true;
    }
    
    
    
    
    void solve(vector<string> &ds, vector<vector<string>> &ans,string s,int index){
        
        if(index==s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<s.size();i++){
            
            if(palindrome(s,index,i)){
                
                ds.push_back(s.substr(index,i-index+1));
                solve(ds,ans,s,i+1);
                ds.pop_back();
                
            }
            
        }
        
        
        
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        solve(ds,ans,s,0);
        
        return ans;
    }
};
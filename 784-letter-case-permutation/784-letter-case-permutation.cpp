class Solution {
public:
    
    void dfs(string s,int index,vector<string> &ans){
        if(index>=s.size()){
            ans.push_back(s);
            return;
        }
          
        if(isalpha(s[index])){
            s[index]=toupper(s[index]);
            dfs(s,index+1,ans);
            s[index]=tolower(s[index]);
            dfs(s,index+1,ans);
        }else
           dfs(s,index+1,ans);
        
        
    }
    
    
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
       
        dfs(s,0,ans);
        
        
        return ans;
    }
};
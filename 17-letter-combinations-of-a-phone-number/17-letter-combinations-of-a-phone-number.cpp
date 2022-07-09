class Solution {
public:
    
    
    void solve(string digits,unordered_map<int,string> umap, vector<string> &ans,string temp,int index){
        
        
        if(index==digits.size()){
            ans.push_back(temp);
            
            return;
        }
        
        
        
        for(auto c:umap[digits[index]-'0'])
        {
            temp.push_back(c);
            solve(digits,umap,ans,temp,index+1);
            temp.pop_back();
            
        }
        
        
        
        
    }
    
    
    
    
    vector<string> letterCombinations(string digits) {
        
        
        if(digits.size()==0)
            return {};
        
        unordered_map<int,string> umap;
        
        umap[2]="abc";
        umap[3]="def";
        umap[4]="ghi";
        umap[5]="jkl";
        umap[6]="mno";
        umap[7]="pqrs";
        umap[8]="tuv";
        umap[9]="wxyz";
        
        vector<string> ans;
        solve(digits,umap,ans,"",0);
        
        return ans;
        
        
        
    }
};
class Solution {
public:
    
    bool valid(string &s,string word){
        
        int i=0;int j=0;
        int temp=0;
        
        while(i<s.size() and j<word.size()){
            
            if(s[i]==word[j]){
                i++;
                j++;
                
             
            }else{
                i++;
            }
            
            
        }
           return (j==(int)word.size());
                   
        
        
    }
    
    
    int numMatchingSubseq(string s, vector<string>& words) {
      
        
        
        unordered_map<string,int> umap;
        
        for(int i=0;i<words.size();i++){
            umap[words[i]]++;
        }
        
        
        int count=0;
        for(auto x:umap){
            
            
            if(valid(s,x.first)){
                count+=x.second;
            }
            
            
        }
        
      return count;
    }
};
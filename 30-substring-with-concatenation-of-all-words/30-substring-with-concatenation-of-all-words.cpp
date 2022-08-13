class Solution {
public:
    
    bool solve(unordered_map<string,int> umap,int wordsSize,string str,int wordlength){
        
        // cout<<str.size()<<" ";
        
        for(int i=0;i<=str.size()-wordlength;i=i+wordlength){
            
            string temp=str.substr(i,wordlength);
            
               if(umap.find(temp)!=umap.end()){
                    
                   umap[temp]--;
                   
                   if(umap[temp]<=0){
                       umap.erase(temp);
                   }
                   
               }
            
            
        }
        
        if(umap.size()==0)
            return true;
        
        
        return false;
    }
    
    
    
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int wordlength=words[0].size();
        
        int wordsSize=0;
        //string count
        unordered_map<string,int> umap;
        
        
       
        for(auto x:words){
            umap[x]++;
            
            wordsSize+=wordlength;
        }
        
        cout<<wordsSize;
        
        vector<int> ans;
        
         if(wordsSize>s.size()){ 
         
            return ans;
         }
        
        
        for(int i=0;i<=s.size()-wordsSize;i++){
            
       
            string str=s.substr(i,wordsSize);
            
          
                if(solve(umap,wordsSize,str,wordlength)){

                    ans.push_back(i);


                }
            
            
            
            
        }
        
        
        
        return ans;
    }
};
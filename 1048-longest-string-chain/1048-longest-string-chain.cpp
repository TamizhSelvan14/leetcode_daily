class Solution {
public:
    
    static bool comp(string &a,string  &b){
        
        return a.size()<b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),comp);
        int ans=0;
      
        unordered_map<string,int> umap;
        
        
        for(auto word:words){
        int longest=0;
            for(int i=0;i<word.size();i++){
                string s=word.substr(0,i)+word.substr(i+1,word.size()-1);
                longest=max(longest,umap[s]+1);
            }
            
            umap[word]=longest;
            ans=max(ans,longest);
            
        }
        
        
        
        return ans;
    }
};
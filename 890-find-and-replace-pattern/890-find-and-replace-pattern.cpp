class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        unordered_map<char,int> umap;
        
        vector<int> index;
        for(int i=0;i<pattern.size();i++){
            
            if(umap.find(pattern[i])!=umap.end()){
                index.push_back(umap[pattern[i]]);
            }else{
                umap[pattern[i]]=i;
                index.push_back(i);
            }
            
            
        }
        
        
        
        for(int i=0;i<words.size();i++){
            
            
             unordered_map<char,int> umap2;
        
            vector<int> sub;
            string word=words[i];
            for(int j=0;j<word.size();j++){

                if(umap2.find(word[j])!=umap2.end()){
                    sub.push_back(umap2[word[j]]);
                }else{
                    umap2[word[j]]=j;
                    sub.push_back(j);
                }
            
            }
            
            if(index==sub)
                ans.push_back(words[i]);
            
            
            
            
        }
        
        
        return ans;
    }
};
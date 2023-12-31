class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
      
        unordered_map<char,pair<int,int>> umap;//char first and last occurence
        
        int maxi=0;
        for(int i=0;i<s.size();i++){
            
            if(umap.find(s[i])!=umap.end()){
                umap[s[i]].second=i;
            }else{
                umap[s[i]].first=i;
                umap[s[i]].second=i;

            }
            
        maxi=max(maxi,umap[s[i]].second - umap[s[i]].first);

            
        }
        
//           for(auto x:umap){
            
//             maxi=max(maxi,x.second.second-x.second.first);
//         }
        
        
        
        return maxi-1;
    }
};
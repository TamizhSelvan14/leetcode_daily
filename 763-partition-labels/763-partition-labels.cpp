class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        
        
        unordered_map<char,int> umap;
        
       for(int i=0;i<s.size();i++){
           umap[s[i]]=i;
       }
        
        
        int first=0,last=umap[s[0]];
        int i=0;
        while(i<=s.size()-1){
            
            
            if(umap[s[i]] >last and i<last){
                last=umap[s[i]];
                
            }else if(umap[s[i]] >last and i>last) {
                ans.push_back((last-first)+1);
                first=i;
                last=umap[s[i]];
            }
             if(i==s.size()-1){
                ans.push_back((last-first)+1);
            }
        
            i++;
            
           
            
            
        }
        // cout<<i<<endl;
//         
        
        
        return ans;
    }
};
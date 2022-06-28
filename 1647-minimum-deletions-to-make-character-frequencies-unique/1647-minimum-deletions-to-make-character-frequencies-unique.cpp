class Solution {
public:
    int minDeletions(string s) {
        
        sort(s.begin(),s.end());
        
        unordered_map<char,int> umap;
        
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        
        //to keep frequencies
        set<int> frequencies;
        
        int ans=0;
        for(auto x:umap){
            
            while(frequencies.find(x.second)!=frequencies.end()){
                x.second--;
                ans++;
            }
            
            if(x.second>0) frequencies.insert(x.second);
            
        }
        
        
        return ans;
    }
    
};
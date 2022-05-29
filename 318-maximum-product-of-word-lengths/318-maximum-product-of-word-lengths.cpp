class Solution {
public:
    
//     bool checkIsEqualOnEachChar(vector<int> &a,vector<int> &b){
        
//         for(int i=0;i<26;i++)
//             if(a[i] && b[i])
//                 return true;
        
        
//         return false;
//     }
    
    
    
//     int maxProduct(vector<string>& words) {
//         int n=words.size();
        
//         //2d hash where row represent the words sie col represent the hash that is 26 char
//         vector<vector<int>> hash(n,vector<int>(26));
        
//         int ans=INT_MIN;
        
//         for(int i=0;i<n;i++){
            
//             for(auto ch:words[i])
//                 hash[i][ch-'a']=1;
            
            
//             for(int j=0;j<i;j++)
//                 if(!checkIsEqualOnEachChar(hash[i],hash[j])){
//                     ans=max(ans,int( size(hash[i])*size(hash[j][j])  ));
//                     cout<<int( size(hash[i]))<<" ";
//                 }
            
            
//             // cout<<ans<<" ";
            
//         }
        
        
        
//         return ans;
//     }
    
    
    int maxProduct(vector<string>& words) {
        int maxlen = 0;
        for(int i = 0; i < words.size(); i++)
            for(int j = i + 1; j < words.size(); j++){
                if(words[i].size() * words[j].size() <= maxlen) continue;
                if(noCommon(words[i], words[j])) maxlen = max(maxlen, (int)(words[i].size() * words[j].size()));
            }
        return maxlen;
    }
    
    bool noCommon(string& a, string& b){
        for(auto x: a) 
            for(auto y: b)
                if(x == y) return false;
        return true;
    }
    
};
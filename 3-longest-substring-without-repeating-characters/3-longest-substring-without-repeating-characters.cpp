class Solution {
public:
    //THIS FUNCTION CHECK IS THE CHARACTER REPEATS THEN RETURNS FALSE
//     bool distinct(string s,int i,int j){
        
//         vector<bool> visited (26);
        
//         for( int k=i;k<=j;k++){
//             if(visited[s[k]-'a']==true){
//                 return false;
//             }
//             visited[s[k]-'a']=true;
//         }
        
//         return true;
//     }
    
    
    
    
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
    int res = 0; // result
        int start=0;
    unordered_map<char,int> umap;
    for (int i = 0; i < n; i++) {
         
        if(umap.find(s[i])!=umap.end() and umap[s[i]]>=start)
        {
            start=umap[s[i]]+1;
        }
        
        umap[s[i]]=i;
        res=max(res,i-start+1);
        
        
    }
    return res;
    }
};
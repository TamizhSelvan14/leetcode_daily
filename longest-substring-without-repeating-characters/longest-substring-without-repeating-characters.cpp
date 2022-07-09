class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
      int start=-1;//giving -1 beacuse to calculate first char
        int maxlength=0;
        
        unordered_map<char,int> umap; //map to store the char and their indexes 
        
        for(int i=0;i<s.size();i++){
            
            if(umap.find(s[i])!=umap.end()){//if same char found reduce the window to curr i+1
                
                start=max(start,umap[s[i]]);
            }
            
            umap[s[i]]=i;//update the current index
            maxlength=max(maxlength,i-start);//get max
            
        }
        
        return maxlength;
        
    }
};
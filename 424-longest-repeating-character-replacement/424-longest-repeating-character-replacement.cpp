class Solution {
public:
    int characterReplacement(string s, int k) {
       
        
        int maxlength=-1;
        int maxfrequency=0;
        unordered_map<char,int> umap;
        
        int left=0,right=0;
        
        while(right<s.size()){
             
            umap[s[right]]++;
           
               // windowlength=right-left+1;
           
             maxfrequency=max(maxfrequency,umap[s[right]]);
            
            if((right-left+1)-maxfrequency>k){
                
               umap[s[left]]--;
                left++;
            }
            
            maxlength=max(maxlength,(right-left+1));
            right++;
            
            
        }
        
        
        return maxlength;
    }
};
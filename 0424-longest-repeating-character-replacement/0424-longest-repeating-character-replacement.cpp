class Solution {
public:
    int characterReplacement(string s, int k) {
        
        //max frequencies
        unordered_map<char,int> umap;
        int maxLen=0;
        int maxFreq=0;
        
        int left=0;
        int right=0;
        
        while(right<s.size()){
            umap[s[right]]++;
            maxFreq=max(maxFreq,umap[s[right]]);
            
            //reduce the window if max frequencies exeeds
            while((right-left+1)- maxFreq > k ){
                umap[s[left]]--;//reduce freq
                left++;
            }
            
            maxLen=max(maxLen,(right-left+1));
            
            right++;
        }
        
        return maxLen;
        
    }
};
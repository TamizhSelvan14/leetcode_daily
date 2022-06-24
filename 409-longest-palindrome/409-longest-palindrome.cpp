class Solution {
public:
    int longestPalindrome(string s) {
        
     set<char> hash;   
    int count=0;
        for(int i=0;i<s.size();i++){
            
            if(hash.find(s[i])!=hash.end()){
                hash.erase(s[i]);
                count++;
                
            }else{
                hash.insert(s[i]);
            }
            
        }
        
        return count*2 + (hash.empty()?0:1);
        
    }
};
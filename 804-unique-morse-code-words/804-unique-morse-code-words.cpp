class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> arr{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> st;
        
        for(int i=0;i<words.size();i++){
            
            string s="";
            
            for(auto x:words[i]){
                // cout<<x-'a'<<" ";
                s+=arr[x-'a'];
                
            }
            
            st.insert(s);
        }
        
        return st.size();
        
    }
};
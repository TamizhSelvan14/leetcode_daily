class Solution {
public:
    
    bool isVowel(char c){
        
        if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U' or c=='a' or c=='e' or c=='i' or c=='o' or c=='u' )
        return true;
        
        return false;
    }
    
    
    string sortVowels(string s) {
        
        vector<char> st;
        
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                st.push_back(s[i]);
                s[i]='_';
            }
        }
            
        sort(st.begin(),st.end());
        int t=0;
        for(int i=0;i<s.size();i++){
            
            
            if(s[i]=='_'){
                s[i]=st[t];
                t++;
            }
            
        }
        
        return s;
            
    }
};
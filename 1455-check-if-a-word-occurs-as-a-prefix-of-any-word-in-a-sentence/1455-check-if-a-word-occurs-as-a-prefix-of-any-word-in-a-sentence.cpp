class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        vector<string> v;
        string s="";
        for(int i=0;i<sentence.size();i++){
            
            if(sentence[i]==' '){
                v.push_back(s);
                s="";
            }else{
                s+=sentence[i];
            }
            
        }
        v.push_back(s);
        
       for(int i=0;i<v.size();i++){
           
           string s=v[i].substr(0,searchWord.size());
           
           if(s==searchWord)
                return i+1;
           
           
       }
        
        return -1;
        
    }
};
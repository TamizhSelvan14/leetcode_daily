class Solution {
public:
    
    
    static bool comp(string &a,string &b){
        return a.size()>b.size();
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        string s="";
        
      
        
        // reverse(words.begin(),words.end());
       sort(words.begin(),words.end(),comp);
          s+=words[0];
        s+='#';
        for(int i=1;i<words.size();i++){
            
          int pos=s.find(words[i]+"#");
            if(pos!=-1)
                continue;
            else
                s+=words[i]+"#";
            
            
        }
        
        return s.size();
    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        sort(s1.begin(),s1.end());
        
        int n1=s1.size();
        int n2=s2.size();
        
        for(int i=0;i<=n2-n1;i++){
            
            string temp=s2.substr(i,n1);
            
            sort(temp.begin(),temp.end());
            
          
            if(s1==temp){
                return true;
            }
            
            
            
        }
        
        
        return false;
    }
};
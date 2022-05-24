class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                ans+=-1;
            }else{
                ans+=1;
            }
            
            if(ans==0)
                count++;
        }
        
        
        
        return count;
    }
};
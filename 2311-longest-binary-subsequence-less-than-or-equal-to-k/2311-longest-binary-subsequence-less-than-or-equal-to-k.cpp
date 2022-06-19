class Solution {
public:
    int longestSubsequence(string s, int k) {
       
        reverse(s.begin(),s.end());
        
        
        int t=__builtin_popcount(k);
        cout<<t;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
          
          if(s[i]=='0')
              ans++;
          else{
              if(k>=pow(2,i)){
                  k-=pow(2,i);
                  ans++;
              }
          }
              
            
            
        }
        
      return ans;  
            
    }
};
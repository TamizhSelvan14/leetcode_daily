class Solution {
public:
    int countHomogenous(string s) {
        int mod = 1e9 + 7;
        int ans=0;
        int count=0;
        char curr='A';
        for(int i=0;i<s.size();i++){
            
            count=s[i]==curr ? count+1 : 1;
            // cout<<s[i]<<" ---- "<<count<<endl;
            curr=s[i];
            
            ans=(ans+count)%mod;
            
            
            
        }
        return ans;
    }
};
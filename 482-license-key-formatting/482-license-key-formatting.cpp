class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]!='-')
                st.push(toupper(s[i]));
        }
        
        int temp=0;
        string ans="";
        while(!st.empty()){
            
            ans+=st.top();
            st.pop();
            temp++;
            
            if(temp==k and !st.empty()){
                
                ans+='-';
                
                temp=0;
            }
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};
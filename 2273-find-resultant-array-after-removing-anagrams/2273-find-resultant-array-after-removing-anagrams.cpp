class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        
        vector<string> ans;
//         
        stack<string> st;
        
        string t=words[0];
            
        sort(t.begin(),t.end());
        
        st.push(t);
        ans.push_back(words[0]);
        
        for(int i=1;i<words.size();i++){
            
            
            string s=words[i];

            sort(s.begin(),s.end());
    
            if(st.top()!=s)
            {   
                st.push(s);
                ans.push_back(words[i]);
                
                    
            }
            
            
            
        }            
        
        return ans;
        
    }
};
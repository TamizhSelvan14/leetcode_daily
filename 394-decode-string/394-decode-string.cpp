class Solution {
public:
    string decodeString(string s) {
      
        stack<char> st;
        
        int n=s.size();
        for(int i=0;i<n;i++){
            
            
                if(s[i]!=']'){
                    st.push(s[i]);
                }else{
                        
                    string currentString="";
                    string currentNumber="";
                    
                    while(st.top()!='['){
                        currentString=st.top()+currentString;
                        st.pop();
                    }
        
                    st.pop();//removing ]
                    
                    while(!st.empty() and isdigit(st.top())){
                        currentNumber=st.top()+currentNumber;
                        st.pop();
                    }

                    int number=stoi(currentNumber);
                    
                    while(number--){
                        for(int j=0;j<currentString.size();j++)
                            st.push(currentString[j]);
                        
                    }
                    
                }
            
        }
        
        
        string ans="";
        
        while(!st.empty()){
            
            ans=st.top()+ans;
            st.pop();
            
        }
        
        
        return ans;
    }
};
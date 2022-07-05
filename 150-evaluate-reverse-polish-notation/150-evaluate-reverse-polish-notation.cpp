class Solution {
public:

    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        
        
        
       
      for(int i=0;i<tokens.size();i++){  
            
          if(tokens[i]=="*" or tokens[i]=="-" or tokens[i]=="+" or tokens[i]=="/"){
                int second=stoi(st.top());
                st.pop();
                int first=stoi(st.top());
                st.pop();
                
                int ans=0;
               
                        
                    if(tokens[i]=="+")
                       ans=(first+second);
                    else  if(tokens[i]=="-")
                      ans=(first-second);
                    else  if(tokens[i]=="*")
                      ans=(first*second);
                     else  if(tokens[i]=="/")
                       ans= (first/second);
        
                    st.push(to_string(ans));
          }else{
                st.push(tokens[i]);
          }
          
        }
        
        return stoi(st.top());
    }
};
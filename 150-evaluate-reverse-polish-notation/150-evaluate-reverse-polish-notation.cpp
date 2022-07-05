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
                
                // cout<<first<<" "<<second<<endl;
                
                int ans=0;
               
                        
                    if(tokens[i]=="+")
                       ans=(first+second);
                    else  if(tokens[i]=="-")
                      ans=(first-second);
                    else  if(tokens[i]=="*")
                      ans=(first*second);
                     else  if(tokens[i]=="/")
                       ans= (first/second);
        
                string s=to_string(ans);
                    st.push(s);
         // cout<<st.top()<<endl;
            
          }else{
                st.push(tokens[i]);
          }
          
         }
        
        return stoi(st.top());
    }
};
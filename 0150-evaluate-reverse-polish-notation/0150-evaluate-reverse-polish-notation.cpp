class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(int i=0;i<tokens.size();i++){

            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/")
            {   
                int top=stoi(st.top());
                st.pop();
                int secondTop=stoi(st.top());
                st.pop();


                if(tokens[i]=="+"){
                    st.push(to_string(secondTop+top));
                }else if(tokens[i]=="-"){
                    st.push(to_string(secondTop-top));
                }else if(tokens[i]=="*"){
                    st.push(to_string(secondTop*top));
                }else if(tokens[i]=="/"){
                    st.push(to_string(secondTop/top));
                }
            }else{
                st.push(tokens[i]);
            }


        }
        return stoi(st.top());
    }
};
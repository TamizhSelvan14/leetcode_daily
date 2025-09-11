class Solution {
public:
    string decodeString(string s) {
        

        stack<char> st;
        
        string ans="";
        for(int i=0;i<s.size();i++){

            if(s[i]!=']'){
                st.push(s[i]);
            }else{

                string t;

                while(st.top()!='['){
                    t=st.top()+t;
                    st.pop();
                }
                st.pop(); //pop opening bracket
              cout<<t<<endl;
                

                string currCount="";
                while(!st.empty() && st.top()>='0' and st.top()<='9'){
                    currCount=st.top()+currCount;
                    st.pop();

                }

                int times=stoi(currCount);
                string val;
                while(times>0){
                    for(int j=0;j<t.size();j++)
                            st.push(t[j]);
                    times--;
                }
            //   cout<<val<<endl;

            //    st.push(val);


            }



        }
       

        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        

    return ans;

    }
};
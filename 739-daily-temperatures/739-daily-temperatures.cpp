class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int n=temperatures.size();
        
//        for(int i=0;i<temperatures.size();i++){
//            for(int j=i+1;j<temperatures.size();j++){
               
//                if(temperatures[j]>temperatures[i]){
//                   ans[i]=(j-i);
//                    break;
//                }
               
//            }
//        }
        
        stack<int> st2;
        
        stack<pair<int,int>> st;
        st.push({temperatures[n-1],n-1});
        ans.push_back(0);
        
        
        
        for(int i=n-2;i>=0;i--){
            
            int curr=temperatures[i];
            
            // int count=1;
            while(!st.empty() and curr>=st.top().first ){
                
                // count++;
                // st2.push(st.top());
                st.pop();
                
            }
            
              if(st.empty())
            ans.push_back(0);
            else 
                ans.push_back(st.top().second-i);
            
//             while(!st2.empty()){
                
//                 st.push(st2.top());
//                 st2.pop();
//             }
            
            
          
            
            st.push({curr,i});
            
            
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      
        
        
//         for(int i=0;i<temperatures.size();i++){
//              int t=0;
//             for(int j=i;j<temperatures.size();j++){
               
                
//                 if(temperatures[j]>temperatures[i]){
//                     ans.push_back(t);
//                     break;
//                 }
//                 t++;
                
//             }
//             if(ans.size()==i) ans.push_back(0);
//         }
        
        //optimized
        int n=temperatures.size()-1;
         vector<int> ans(n+1,0);
        
        stack<pair<int,int>> st;
        
        st.push({temperatures[n],n});
        
        
        
        for(int i=n-1;i>=0;i--){
            
            int current=temperatures[i];
            
            while(!st.empty() && current>=st.top().first){
                st.pop();
            }
            
            if(!st.empty())
                ans[i]=st.top().second-i;
            
            
            st.push({current,i});
        }
        
        
        return ans;
    }
};
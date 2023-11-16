class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int len=nums[0].size();
        
        unordered_set<int> st;
        
        for(int i=0;i<nums.size();i++)
           st.insert(stoi(nums[i],0,2));
        
        for(int i=0;i<nums.size();i++){
            
            string s=nums[i];
            
            if(s[s.size()-1]=='1'){
               int t=s.size()-1;
                
                while(t>=0){
                     s[t]='0';
                
                
                    if (st.find(stoi(s,0,2)) == st.end())
                    {
                        return s;
                    }
                    
                    t--;
                }
                
               
                
            }else {
                    int t=s.size()-1;
            
                while(t>=0){
                     s[t]='1';
                
                
                    if (st.find(stoi(s,0,2)) == st.end())
                    {
                        return s;
                    }
                    
                    t--;
                }
            }
           
        }
        
        
        return "";
    }
};
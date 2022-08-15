class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap{
            
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
            
        };
        
        
        int ans=0;
        int i;
        for(i=0;i<s.size()-1;i++){
            
            if(umap[s[i]]<umap[s[i+1]]){
            ans-=umap[s[i]];
            }else{
                ans+=umap[s[i]];
            }
            
        }
        
        //add last char
        ans+=umap[s[i]];
        
        return ans;
        
    }
};
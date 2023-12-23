class Solution {
public:

    
    
    bool isPathCrossing(string path) {
        
        
        
        set<pair<int,int>> st;
        
        pair<int, char> start={0,0};
        st.insert(start);
        for(int i=0;i<path.size();i++){
            
            if(path[i]=='N'){
                start.first++;
            }else if(path[i]=='E'){
                start.second++;
            }else if(path[i]=='S'){
                start.first--;
            }else if(path[i]=='W'){
                start.second--;
            }
            
            if(st.find(start)!=st.end()){
                return true;
            }else{
                st.insert(start);
            }
            
            
        }
        
        return false;
    }
};
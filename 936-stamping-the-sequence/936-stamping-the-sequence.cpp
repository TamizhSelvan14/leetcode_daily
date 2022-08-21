class Solution {
public:
    
    bool replace(string &stamp,string &target,int &stars,int start,vector<int> &ans){
        
        
        for(int i=0;i<stamp.size();i++){
            
            if(target[i+start]!='*' and target[i+start]!=stamp[i])
                return false;
            
        }
        
        ans.push_back(start);
        
        for(int i=start;i-start<stamp.size();i++){
            
            if(target[i]!='*'){
                stars++;
                target[i]='*';
            }
            
        }
        
        
        return true;
        
    }
    
    
    vector<int> movesToStamp(string stamp, string target) {
        
        int t_size=target.size();
        int s_size=stamp.size();
        
        int stars=0;
        
        vector<int> ans;
        vector<bool> visited(t_size,false);
        
        
        while(stars<t_size){
            
            
            //move by stamp size
            
            bool replaced=false;
            
            for(int i=0;i<=t_size-s_size and stars<t_size ;i++){
                
                
                if(!visited[i]){
                    
                   replaced = replace(stamp,target,stars,i,ans);
                       visited[i]=replaced;
                    
                }
                
                
            }
            
            if(!replaced)
                return {};
            
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        if(hand.size()%groupSize!=0)
            return false;
        
        sort(hand.begin(),hand.end());
        
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<hand.size();i++){
            umap[hand[i]]++;
        }
       
        for(auto x:hand){
            
            if(umap[x]==0)
                continue;
            
            for(int i=0;i<groupSize;i++){
                
                if(umap[x+i]==0)
                    return false;
                else
                    umap[x+i]--;
                
            }
            
        }
                
          
       
        
        
        return true;
    }
};
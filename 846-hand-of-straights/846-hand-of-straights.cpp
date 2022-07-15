class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        if(hand.size()%groupSize!=0)
            return false;
        
        
        map<int,int> umap;
        
        for(int i=0;i<hand.size();i++){
            umap[hand[i]]++;
        }
       
        while(!umap.empty()){
            
            int curr=umap.begin()->first;
            
            for(int i=0;i<groupSize;i++){
                
                if(umap[curr+i]==0)
                    return false;
                
                
                    umap[curr+i]--;
                
                if(umap[curr+i]<1)
                    umap.erase(curr+i);
                
            }
            
        }
        return true;
    }
};
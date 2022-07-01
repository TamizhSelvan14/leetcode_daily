class Solution {
public:
    
    static bool comp(vector<int>&a,vector<int> &b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxtypes, int trucksize) {
        
        int ans=0;
        
        sort(boxtypes.begin(),boxtypes.end(),comp);
        
        
        
        for(auto box:boxtypes){
            
            // if(trucksize>0){
                if(trucksize>=box[0]){
                    ans+=box[0]*box[1];
                    trucksize-=box[0];
                }else{
                    ans+=trucksize*box[1];
                    trucksize=0;
                }
            
            // }
            
        }
        
        
        
        return ans;
        
    }
};
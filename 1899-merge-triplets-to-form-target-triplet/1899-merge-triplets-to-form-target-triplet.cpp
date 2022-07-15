class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {\
        
        
        int val1=0,val2=0,val3=0;
        
        for(auto tri:triplets){
            
           if(tri[0]<=target[0] and tri[1]<=target[1] and tri[2]<=target[2])
            {
               val1=max(val1,tri[0]);
               
               val2=max(val2,tri[1]);
               
               val3=max(val3,tri[2]);
               
            }   
        }
        
                                                                            if(val1==target[0] and val2==target[1] and val3==target[2])
           return true;
        
        return false;
    }
};
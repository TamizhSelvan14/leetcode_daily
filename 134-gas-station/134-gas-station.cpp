class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
     
    int totalgas=accumulate(gas.begin(),gas.end(),0);
    
    int totalcost=accumulate(cost.begin(),cost.end(),0);
    
    if(totalgas<totalcost)
       return -1;
    
    
    int index=0;
    int total=0;
    
    for(int i=0;i<gas.size();i++){
        
        total+=(gas[i]-cost[i]);
        
        if(total<0)
        {
            total=0;
            index=i+1;
        }
        
        
        
    }
    
    return index;
    }
    
};
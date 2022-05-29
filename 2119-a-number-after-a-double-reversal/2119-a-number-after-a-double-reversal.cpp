class Solution {
public:
    bool isSameAfterReversals(int num) {
//         if(num==0)
//             return true;
        
//         if((num%10) ==0)
//             return false;
    
        
//         return true;
        
        //same above in one line
        
        return (num==0) || (num%10)!=0;
        
    }
};
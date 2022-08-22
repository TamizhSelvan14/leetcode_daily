class Solution {
public:
    
//     bool check(int val,int ans){
        
//         if(val>ans)
//             return false;
            
//         if(val==ans)
//             return true;
        
//          return check(val*val,ans);
//     }
    
    bool isPowerOfFour(int n) {
        
        if(n==1)
            return true;
        
        long long  val=4;
        
        if(val==n)
                return true;
        
        while(val<=n){
            
            val=val*4;
            
            if(val==n)
                return true;
            
            
        }
        
        
        return false;
    }
};
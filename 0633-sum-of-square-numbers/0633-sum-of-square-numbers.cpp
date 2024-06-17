class Solution {
public:
    bool judgeSquareSum(int c) {
        
        

        long long i=0;
        long long j=sqrt(c);
        
        while(i<=j){
            long long  val=(i*i)+(j*j);
            
            if(val==c)
                return true;
            
            if(val<c)
                i++;
            else 
                j--;
            
           
        
        }
        
        
        return false;
    }
};
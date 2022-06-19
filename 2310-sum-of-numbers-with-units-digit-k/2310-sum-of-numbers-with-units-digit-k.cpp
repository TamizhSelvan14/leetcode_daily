class Solution {
public:
    int minimumNumbers(int num, int k) {
        
        int count=0;
        int i=0;
        
         if(num==0){                    // if num=0 then 0 is ans
            return 0;
        }
        
        
        if(num%2!=0 and k%2==0)
            return -1;
        
        
        if(k==0){
            if(num%10==0)
                return 1;
            else 
                return -1;
        }
        
        
        while(num>=k){
        
            if(num%10==k){
                return count+1;
            }else{
                
                num-=k;
                count++;
                
                
            }
            
            
        }
        
        return -1;
        
    }
};
class Solution {
public:
    int totalMoney(int n) {
        
        int fullWeeks=n/7;
        
        int sum=0;
        
        for(int i=1;i<=fullWeeks;i++){
            sum+=7*(i+3);
        }
        
        //left over days
        for(int i=7*fullWeeks;i<n;i++){
             fullWeeks++;
            sum+=fullWeeks;
           
        }
        
        
        return sum;
    }
};
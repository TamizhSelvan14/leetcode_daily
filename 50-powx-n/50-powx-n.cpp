class Solution {
public:
    double mod=1e9+7;
    double myPow(double x, int n) {
        
//         if(n<0)
//         {
//             x=1/x;
//             n=n*-1;
//         }
        
        
//         if(n==1)
//             return x;
        
        
//         return x*myPow(x,n-1);
        
         long exponent = abs(n);
        double curr = x;
        double result = 1.0;
        
        for (long i = exponent; i > 0; i /= 2) {
            if (i % 2 == 1) {
                result *= curr;
            }
            curr *= curr;
        }
        
        if (n < 0) {
            return 1.0 / result;
        }
        return result;
        
    }
};